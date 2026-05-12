/* EL2008 Praktikum Pemecahan Masalah dengan Pemrograman
* Modul     : 4
* Tanggal   : 12/05/2026
* Pembuat   : Saragih, Jan Roman Arthuro
* NIM       : 13224012
* Deskripsi : Mencetak preorder inorder postorder dari input
*/

#include <stdio.h>

int tree[10000];
int n;

void preorder(int i){
    if (i>=n) return;
    printf("%d",tree[i]);
    preorder(2*i+1);
    preorder(2*i+2);
}

void inorder(int i) {
    if (i>=n) return;
    inorder(2*i+1);
    printf("%d", tree[i]);
    inorder(2*i+2);
}

void postorder(int i){
    if (i>=n) return;
    postorder(2*i+1);
    postorder(2*i+2);
    printf("%d",tree[i]);
}


int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tree[i]);  
    }
    printf("PRE ");
    preorder(0);
    printf("\n");

    printf("IN ");
    inorder(0);
    printf("\n");

    printf("POST ");
    postorder(0);
    printf("\n");

    return 0;
}