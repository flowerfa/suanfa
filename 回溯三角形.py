class Huisu(object): #rtlist存储所有返回的所有排列，templist用来生成每个排列
    def backtrack(self,rtlist,templist,nums):
        if(len(templist) == len(nums)):
            temp = templist[:6]
            if (sum(temp[0:3])== sum(temp[2:5]) ) and ( sum(temp[2:5]) == sum(temp[-2:],temp[0])):
                if temp not in rtlist:
                    rtlist.append(temp)
        else:
            for i in nums:
                if(i in templist): #如果在当前排列中已有i则continue
                    continue
                templist.append(i)
                self.backtrack(rtlist,templist,nums)
                templist.pop() #把结尾的元素用nums中的下一个值替换掉，遍历下一颗子树
    def permute(self,nums):
        rtlist = []
        templist = []
        self.backtrack(rtlist,templist,nums)
        return rtlist
t = Solution()
lst = t.permute([1,2,3,4,5,6,7,8,9])
print(lst)
