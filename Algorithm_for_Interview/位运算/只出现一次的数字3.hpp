/*
ֻ����һ�ε����� III - LeetCode (�й�) https://leetcode-cn.com/problems/single-number-iii/description/

��Ŀ��Դ��LeetCode

��Ŀ������
    ����һ���������� nums������ǡ��������Ԫ��ֻ����һ�Σ���������Ԫ�ؾ��������Ρ� �ҳ�ֻ����һ�ε�������Ԫ�ء�

    ʾ�� :
        ����: [1,2,1,3,2,5]
        ���: [3,5]

    ע�⣺
        ��������˳�򲢲���Ҫ��������������ӣ� [5, 3] Ҳ����ȷ�𰸡�
        ����㷨Ӧ�þ�������ʱ�临�Ӷȡ����ܷ��ʹ�ó����ռ临�Ӷ���ʵ�֣�

����˼·��
    1. �����ų���Ҫ����ķ�����ʱ�临�Ӷ�Ҫ�󲻷�

    2. ����Կռ临�Ӷ�û��Ҫ����ô��򵥵�������Ȼ�������ֵ�/map

    3. ���Ҫ��ռ临�Ӷ�Ϊ O(1)����ô������Ҫ���õ�λ��������ʣ�
        a ^ a = 0
        a ^ 0 = a
        a ^ b ^ a = b

        �ȿ��Ǽ򵥵���������������ֻ��һ��������һ�Σ���ô���������������ʣ������׾����ҵ�������
        ���ǣ���������������ν�ԭ���黮�֣�ʹ a �� b �ֱ����ڲ�ͬ������

        a != b������ a ^ b = c != 0
        Ҳ����˵ c �Ķ������б���һλΪ 1������ ^ �����ʣ�Ҳ����˵������һλ�ϣ�a �� b �ز���ͬ
        ������һ�����������������飬�ɱ�֤ a �� b ���ڲ�ͬ������

�ύ��¼��
    1. ���ɵ� n λΪ 1 ������Ӧ����
        int x = 1 << (n-1)��������
        int x = 1 << n;
    2. == �����ȼ����� &������
        if (i & x != 0)��Ӧ��д�� 
        if ((i & x) != 0)������ֱ��
        if (i & x)

    3. С�Ľ�
        ������ת�ͣ�����ֱ�ӷ���
            return {a, b}; ������Ҫ
            return vector<int>{a, b};

*/
#pragma once

#include "../all.h"

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // �ȱ���һ����� c
        int c = 0;
        for (auto i : nums)
            c ^= i;

        // �ҳ� c �Ķ������������һ��Ϊ 1 ��λ��
        int idx = 0;
        while (c) {
            if (c & 1) {
                idx++;
                break;
            }
            idx++;
            c >>= 1;
        }

        int x = 1 << (idx-1);
        int a = 0, b = 0;
        for (auto i : nums) {
            if (i & x)
                a ^= i;
            else
                b ^= i;
        }

        //return vector<int>{a, b};
        return { a, b };  // �Զ�ת��
    }
};

void 
solve()
{   
    for (auto i : vector<int>{1, 2})
        print(i);

    vector<int> a{ 1, 2, 1, 3, 2, 5 };
    vector<int> ret = Solution().singleNumber(a);

    for (auto i : ret)
        print(i);

    if (3 & 5)
        print("test");
}