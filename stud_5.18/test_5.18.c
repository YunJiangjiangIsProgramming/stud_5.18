#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//模拟大数相加

//int* addToArrayForm(int* A, int Asize, int  k)
//{
//	int Ksize = 0;
//	int KNum = k;
//	int a = 0;
//	if (Ai >= 0)
//	{
//		a=
//	}
//
//
//
//}
//int main()
//{
//	int A[6] = {1,0,0,0,0,0};
//	int k = 123;
//	int Asize = sizeof(A) / sizeof(A[0]);
//	int* ret = addToArrayForm(A, Asize, k);
//	return 0;
//}


//#define MAX_DIGITS 1000 // 假设我们最多支持1000位的大数
//
// 函数原型声明
//void addLargeNumbers(int num1[], int len1, int num2[], int len2, int result[]);
//
//int main() {
//     示例：计算两个大数的和
//    int number1[MAX_DIGITS] = { 1, 2, 3, 4, 5 }; // 假设这是第一个大数，5位数
//    int number2[MAX_DIGITS] = { 5, 4, 3, 2, 1 }; // 假设这是第二个大数，也是5位数
//    int result[MAX_DIGITS]; // 存储结果的大数
//
//    addLargeNumbers(number1, 5, number2, 5, result); // 调用函数进行相加
//
//     打印结果
//    for (int i = MAX_DIGITS - 1; i >= 0; i--) {
//        if (result[i] != 0) {
//            for (; i >= 0; i--) {
//                printf("%d", result[i]);
//            }
//            break;
//        }
//    }
//    printf("\n");
//
//    return 0;
//}
//
// 实现大数相加的函数
//void addLargeNumbers(int num1[], int len1, int num2[], int len2, int result[]) {
//    int carry = 0; // 进位初始化为0
//    int sum = 0;   // 每一位相加的结果
//    int i, j;
//
//     从最低位开始相加，一直加到最高位
//    for (i = 0, j = 0; i < len1 || j < len2; i++, j++) {
//        sum = carry;
//        if (i < len1) {
//            sum += num1[i]; // 加上第一个数的当前位
//        }
//        if (j < len2) {
//            sum += num2[j]; // 加上第二个数的当前位
//        }
//        carry = sum / 10; // 计算新的进位
//        result[i] = sum % 10; // 存储当前位的结果
//    }
//
//     如果最后还有进位，将其放入结果数组的最高位
//    if (carry != 0) {
//        result[i] = carry;
//    }
//}





//搭建一个单链表



//Node* SListFind(Node* n1, int x)
//{
//	Node* cur = n1;
//	while (cur)
//	{
//		if (cur->val == x)
//		{
//			return cur;
//		}
//		cur = cur->next;
//
//
//	}
//	return NULL;
//
//}

//struct ListNode* reverseList(struct ListNode* n1)
//{
//	if (n1 == NULL || n1->next == NULL)
//	{
//		return n1;
//	}
//	struct ListNode* m1 = NULL;
//	struct ListNode* m2 = n1;
//	struct ListNode* m3 = n1->next;
//	while (m2)
//	{
//		m2->next = m1;
//		m1 = m2;
//		m2 = m3;
//		if(m3)
//		{ 
//			m3 = m3->next;
//		}
//	}
//
//	return m1;
//}





//int main()
//{
//	Node* n1 = (Node*)malloc(sizeof(Node));
//	n1->val = 1;
//	Node* n2 = (Node*)malloc(sizeof(Node));
//	n2->val = 4;
//	Node* n3 = (Node*)malloc(sizeof(Node));
//	n3->val = 3;
//	Node* n4 = (Node*)malloc(sizeof(Node));
//	n4->val = 2;
//	Node* n5 = (Node*)malloc(sizeof(Node));
//	n5->val = 5;
//
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = n5;
//	n5->next = NULL;
//
//	struct ListNode* ret = reverseList(n1);
//	/*Node* ret = SListFind(n1,2);
//	printf("%d", ret->val);*/
//	
//
//}
//头插法来实现链表反转

//reverseList(struct ListNode* n1)
//{
//    if (n1 == NULL || n1->next == NULL)
//    {
//        return n1;
//    }
//    struct ListNode* cur = n1;
//    struct ListNode* Next = n1->next;
//    struct ListNode* newhead = NULL;
//    while (cur)
//    {
//
//        cur->next=newhead;//cur指向新头
//        newhead = cur;//换新头
//        cur = Next;
//        if (Next)
//        {
//            Next = Next->next;
//        }//迭代
//
//    }
//    return newhead;
//


void printList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}
struct ListNode removeElements(struct ListNode head, int val)
{
    Node* prev = NULL;
    Node* cur = head;
    while (cur)
    {
        if (cur->val == val)
        {
            prev->next = cur->next;
            free(cur);
        }
        else
        {
            prev = cur;
            cur = cur->next;//迭代

        }

    }
    return head;

}

struct ListNode
{
    int val;
    struct ListNode* next;

};

typedef  struct ListNode Node;

int main() {
    Node* n1 = (Node*)malloc(sizeof(Node));
    n1->val = 1;
    Node* n2 = (Node*)malloc(sizeof(Node));
    n2->val = 4;
    Node* n3 = (Node*)malloc(sizeof(Node));
    n3->val = 3;
    Node* n4 = (Node*)malloc(sizeof(Node));
    n4->val = 2;
    Node* n5 = (Node*)malloc(sizeof(Node));
    n5->val = 5;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    printf("Original List: ");
    printList(n1);

    struct ListNode* ret = removeElements(n1,4);
    printf("removeElements List: ");
    printList(ret);

    // 释放分配的内存
    Node* current = n1;
    while (current) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}

//反转链表
/*void printList(struct ListNode* head) 
{
    struct ListNode* current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}*///打印链表的打印函数

