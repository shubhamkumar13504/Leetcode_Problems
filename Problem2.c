// #include <stdio.h>
// #include <stdlib.h>

// typedef struct ListNode {
//     int val;
//     struct ListNode *next;
// } ListNode;

// // Helper to create a new node
// ListNode* createNode(int val) {
//     ListNode* node = (ListNode*)malloc(sizeof(ListNode));
//     node->val = val;
//     node->next = NULL;
//     return node;
// }

// // Main function to add two numbers
// ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//     ListNode dummy;
//     ListNode* curr = &dummy;
//     dummy.next = NULL;
//     int carry = 0;

//     while (l1 || l2 || carry) {
//         int sum = carry;
//         if (l1) { sum += l1->val; l1 = l1->next; }
//         if (l2) { sum += l2->val; l2 = l2->next; }
//         carry = sum / 10;
//         curr->next = createNode(sum % 10);
//         curr = curr->next;
//     }
//     return dummy.next;
// }

// // Helper to print the list
// void printList(ListNode* head) {
//     while (head) {
//         printf("%d ", head->val);
//         head = head->next;
//     }
//     printf("\n");
// }
// // char res(int a){
// //     return "a";
// // }
// // Example usage
// int main() {
//     // l1 = [2,4,3]
//     ListNode* l1 = createNode(2);
//     l1->next = createNode(4);
//     l1->next->next = createNode(3);
//     // int a= res(5);
//     // l2 = [5,6,4]
//     ListNode* l2 = createNode(5);
//     l2->next = createNode(6);
//     l2->next->next = createNode(4);

//     ListNode* result = addTwoNumbers(l1, l2);
//     printf("Result: ");
//     printList(result); // Output: 7 0 8

//     // Free memory (not shown for brevity)
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
 struct ListNode* createNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;
    int carry = 0;

    while (l1 || l2 || carry) {
        int sum = carry;
        if (l1) { sum += l1->val; l1 = l1->next; }
        if (l2) { sum += l2->val; l2 = l2->next; }
        carry = sum / 10;

        struct ListNode* newNode = createNode(sum % 10);

        if (!head) {
            head = tail = newNode;  // First node
        } else {
            tail->next = newNode;   // Add subsequent nodes
            tail = newNode;
        }
    }
    return head;}
void printlist(struct ListNode* head){
        while(head){
            printf("value are: %d",head->val);
            head=head->next;
        }
}

int main(){
    struct ListNode* l1=createNode(2);
    l1->next=createNode(5);
    printlist(l1);
    struct ListNode* l2=createNode(2);
    l2->next=createNode(5);
    printlist(l2);

}