/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode dummy;// newlist bosluk yerine node'u göstersin diye sahte baş
    struct ListNode* newlist = &dummy;

    dummy.next = NULL;

    while(list1 != NULL && list2 != NULL)
    {
        if (list1->val <= list2->val)
        {
            newlist->next = list1;
            list1 = list1->next;
        }
        else
        {
            newlist->next = list2;
            list2 = list2->next;
        }
        newlist = newlist->next;
    }
    // döngü bitince listelerden biri NULL'dır, diğerinin kalanını sona bağla
    // listelerden biri ekren bittigi için yani
    newlist->next = (list1 == NULL) ? list2 : list1;
    // kısa if else kullanımı = (koşul) ? dogruysa : yanlışsa

    return (dummy.next);// newlist * oldugu için dummy nin adresini gösteriyor
    //bu sayede newlist üzerinden dummy i dolduruyoruz newlist listenin sonunu gösterdigi için
    //dummy.next ise listenin bası oldugu için onu return ediyoruz
}
