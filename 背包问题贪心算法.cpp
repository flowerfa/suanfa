#include <iostream>
#include <algorithm>
using namespace std;
struct bag
{
    int weight;//������
    int value;//�ܼ�ֵ
    float bi;//��λ�����ļ�ֵ
    float rate;//ʹ���ʣ�1�����������룬С��1�����ָ�����
} bags[50];
bool compare(const bag &bag1,const bag &bag2)
{
    return  bag1.bi>bag2.bi;
}
int main()
{
    int sum=0,n;
    float M;
    int j=0;
    cout<<"���뱳����������Ʒ������"<<endl;
    cin>>M>>n;
    for(int i=0; i<n; i++)
    {
        cin>>bags[i].weight>>bags[i].value;//¼����Ʒ�����ͼ�ֵ��
        bags[i].bi=(float)bags[i].value/bags[i].weight;//���㵥λ������ֵ��
        bags[i].rate=0;//��ʼ��ÿ����Ʒʹ���ʡ�
    }
    sort(bags,bags+n,compare);//����Ʒ���յ�λ������ֵ�ɴ�С����
    for(j=0; j<n; j++)
    {
        if(bags[j].weight<=M)
        {
            bags[j].rate=1;
            sum+=bags[j].weight;
            M-=bags[j].weight;
            cout<<"�أ�"<<bags[j].weight<<"��ֵ��"<<bags[j].value<<"����Ʒ�������˱���"<<endl<<"�������:"<<bags[j].rate<<endl;
        }
        else break;
    }
    if(j<n)
    {
        bags[j].rate=M/bags[j].weight;
        sum+=bags[j].rate*bags[j].weight;
        cout<<"�أ�"<<bags[j].weight<<"��ֵ��"<<bags[j].value<<"�������˱���"<<endl<<"�������:"<<bags[j].rate<<endl;
    }

    return 0;
}

