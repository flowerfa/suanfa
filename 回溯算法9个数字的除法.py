class Solution(object): #给定一个所有元素都不同的list，要求返回list元素的全排列。 #rtlist用来存储所有的返回所有排列，templist用来生成每个排列
    def backtrack(self,rtlist,templist,nums):
        if(len(templist) == len(nums)):
            i=templist[0]
            j=templist[1]
            k = templist[2]
            l= templist[3]
            m = templist[4]
            n = templist[5]
            o= templist[6]
            p = templist[7]
            q = templist[8]
            if (i/(j*10+k)+l/(m*10+n)==o/(p*10+q)):
                if templist not in rtlist:
                    rtlist.append(templist)
        else:
            for i in nums:
                if(i in templist): #如果在当前排列中已经有i了，就continue，相当于分支限界，即不对当前节点子树搜寻了
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
