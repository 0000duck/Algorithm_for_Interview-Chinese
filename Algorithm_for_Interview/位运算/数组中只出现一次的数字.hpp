/*
������ֻ����һ�ε����� https://www.nowcoder.com/practice/e02fdb54d7524710a7d664d082bb7811?tpId=13&tqId=11193&rp=2&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking

��Ŀ��Դ����ָOffer

��Ŀ����
һ�����������������������֮�⣬���������ֶ����������Ρ���д�����ҳ�������ֻ����һ�ε����֡�

ʱ�����ƣ�1�� �ռ����ƣ�32768K �ȶ�ָ����106869
����֪ʶ�㣺 ����

֪ʶ�㣺
    ʱ�任�ռ�

����˼·��
    1. ���� map ������ִ������ռ临�Ӷ� O(n)
    2. �������ٱ�����ʱ�临�Ӷ� O(nlogn)

    3. ����ѣ����� ���(^) ���㣨�ο�����������

        ���֪ʶ�㣺
            a ^ 0 = a
            a ^ a = 0 
            a ^ b ^ a = b

        ���ֻ��һ�����ֳ���һ�Σ���ô����ܼ򵥣�������������������Ľ�������Ǹ�����һ�ε���

        ���Ǳ������������ֳ�����һ�Σ����������˼·��
            ����Ҫ���ľ��ǽ�ԭ�����������֣�a �� b �ֱ�����������֮�У�֮�󵥶������������ּ��ɡ�
        
        ������λ���㲻�죬��ô���ܺ����뵽����ķ�����
            ����������£�
                ������ֻ����һ�ε���Ϊ a, b
                1. �ȶ���������������Ľ���� a^b
                2. a^b �ز�Ϊ 0���������Ķ�������������һλΪ 1��
                    �ҳ������𣩵�һ��Ϊ 1 ��λ�ã���Ϊ n���� a �� b �ĵ� n λ����ͬ
                    �����Ե� n λ�Ƿ�Ϊ 1 ��ԭ�����Ϊ����
                    ����������

�ύ��¼��
    1. ����ֵд������
        Ӧ���� *num = n;
        д���� num = &n;
    2. ֻ���� 75%
        δ������ {1,1,1,1,4,6}
    3. ʹ��˼· 3 pass

*/
#pragma once

#include "../all.h"

class Solution {
public:
    void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
        int cor = 0;
        for (auto i : data) 
            cor ^= i;

        int n1 = 1;
        int tmp = cor;
        while (tmp) {
            if (tmp & 1) break;  // �ж���ż�ĳ��ò���������Ŀ�����ж����һλ�Ƿ�Ϊ 1
            n1++;
            tmp >>= 1;
        }

        tmp = 1;
        tmp <<= n1-1;
        *num1 = *num2 = 0;  // ��ֹ num1 �� num2 �ĳ�ֵ��Ϊ 0
        for (auto i : data) {
            if (i & tmp)  // �벻���ⲽ��ʲôЧ��ʱ������һ��
                *num1 ^= i;
            else
                *num2 ^= i;
        }
    }
};

void 
solve()
{
    print(123 ^ 123);  // 0
    print(4 ^ 6 ^ 4);
    print(2 ^ 0);

    //vector<int> data{ 2,4,3,6,3,2,5,5 };
    vector<int> data{ 1,1,1,1,4,6 };
    int num1 = 0;
    int num2 = 0;
    Solution().FindNumsAppearOnce(data, &num1, &num2);
    print(num1);
    print(num2);
}
