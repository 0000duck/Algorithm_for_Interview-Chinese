/*
��ת�������С���� https://www.nowcoder.com/practice/9f3231a991af4f55b95579b44b7a01ba?tpId=13&tqId=11159&tPage=1&rp=2&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking

��Ŀ��Դ����ָOffer

��Ŀ����
��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת�� 
����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء� 
��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1�� 
NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��

ʱ�����ƣ�3�� �ռ����ƣ�32768K �ȶ�ָ����283825
����֪ʶ�㣺 ����

����˼·��
    ���ǵݼ���˵��Ԫ�ؿ����ظ�
    ע�� {3,4,5,1,2,3} ���������ʱֻҪ lo++ �� hi-- ����

�ύ��¼��
    
*/
#pragma once

#include "../all.h"

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if (rotateArray.empty()) {
            return 0;
        }

        int lo = 0;
        int hi = rotateArray.size() - 1;

        // ��ȫ��ת������˵û����ת
        if (rotateArray[lo] < rotateArray[hi])
            return rotateArray[lo];

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            if (rotateArray[mid] > rotateArray[hi])
                lo = mid + 1;
            else if (rotateArray[mid] < rotateArray[hi])
                hi = mid;
            else
                hi--;  // ��ֹ������� {3,4,5,1,2,3}
        }
        
        return rotateArray[lo];
    }
};

void solve() {
    vector<int> v{ 3,4,5,1,2,3 };
    int ret = Solution().minNumberInRotateArray(v);
    print(ret);
}
