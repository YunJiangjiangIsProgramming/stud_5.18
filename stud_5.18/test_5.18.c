#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//ģ��������

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


//#define MAX_DIGITS 1000 // �����������֧��1000λ�Ĵ���
//
// ����ԭ������
//void addLargeNumbers(int num1[], int len1, int num2[], int len2, int result[]);
//
//int main() {
//     ʾ�����������������ĺ�
//    int number1[MAX_DIGITS] = { 1, 2, 3, 4, 5 }; // �������ǵ�һ��������5λ��
//    int number2[MAX_DIGITS] = { 5, 4, 3, 2, 1 }; // �������ǵڶ���������Ҳ��5λ��
//    int result[MAX_DIGITS]; // �洢����Ĵ���
//
//    addLargeNumbers(number1, 5, number2, 5, result); // ���ú����������
//
//     ��ӡ���
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
// ʵ�ִ�����ӵĺ���
//void addLargeNumbers(int num1[], int len1, int num2[], int len2, int result[]) {
//    int carry = 0; // ��λ��ʼ��Ϊ0
//    int sum = 0;   // ÿһλ��ӵĽ��
//    int i, j;
//
//     �����λ��ʼ��ӣ�һֱ�ӵ����λ
//    for (i = 0, j = 0; i < len1 || j < len2; i++, j++) {
//        sum = carry;
//        if (i < len1) {
//            sum += num1[i]; // ���ϵ�һ�����ĵ�ǰλ
//        }
//        if (j < len2) {
//            sum += num2[j]; // ���ϵڶ������ĵ�ǰλ
//        }
//        carry = sum / 10; // �����µĽ�λ
//        result[i] = sum % 10; // �洢��ǰλ�Ľ��
//    }
//
//     �������н�λ�������������������λ
//    if (carry != 0) {
//        result[i] = carry;
//    }
//}





//�һ��������



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
//ͷ�巨��ʵ������ת

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
//        cur->next=newhead;//curָ����ͷ
//        newhead = cur;//����ͷ
//        cur = Next;
//        if (Next)
//        {
//            Next = Next->next;
//        }//����
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
            cur = cur->next;//����

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

    // �ͷŷ�����ڴ�
    Node* current = n1;
    while (current) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}

//��ת����
/*void printList(struct ListNode* head) 
{
    struct ListNode* current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}*///��ӡ����Ĵ�ӡ����

