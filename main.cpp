

#include <iostream>
#include <vector>

using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 // A simple C++ program for traversal of a linked list

int removeElement(vector<int>& nums, int val) {

    for(int i=0;i<nums.size();i++){
        if(val==nums.at(i)){
            nums.erase(nums.begin()+i);
            i--;
        }
    }

    return nums.size();
}

 void printList(ListNode* n)
 {
   cout<<endl;
     while (n != NULL) {
         cout << n->val << " ";
         n = n->next;
     }
 }

 // Driver code
 int main()
 {

    vector<int> deneme;
    deneme.push_back(3);
    deneme.push_back(2);
    deneme.push_back(2);
    deneme.push_back(3);
     cout<<endl<<removeElement(deneme,3)<<endl;
     vector<int> deneme2;
     deneme2.push_back(0);
     deneme2.push_back(1);
     deneme2.push_back(2);
     deneme2.push_back(2);
     deneme2.push_back(3);
     deneme2.push_back(0);
     deneme2.push_back(4);
     deneme2.push_back(2);
     cout<<endl<<removeElement(deneme2,2)<<endl;
     return 0;
 }

 // This is code is contributed by rathbhupendra

