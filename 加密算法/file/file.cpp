//�����Ǵ����ļ������ļ�������ݶ�ȡ��char A[]�У���char B[]�е�����д�뵽�ļ���
//����������Write(char B[],File *f);Read(char A[],File *f);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void Read(char A[]);
int main()
{
    char B[100];
    char A[100];
    FILE *f1;

 
    //д��
    int i;

    printf("������B��������ݣ�");
    scanf("%s",B);

    f1=fopen("I:/a.txt","w");
    for(i=0;B[i]!=NULL;i++)
    {
        fprintf(f1,"%c",B[i]);
    }
    fclose(f1);
    printf("��Ϣ�ɹ�д���ļ���\n");


    Read(A);
    return 0;
}

//���ļ�f�е����ݶ���A��
void Read(char A[])
{
	FILE *f;
    int i=0;
    char c;
    char name[100];
    printf("���������Ҫ��ʾ���ݵ��ļ�������:");
    scanf("%s",name);
    f=fopen(name,"r");
    if(f==NULL)
    {
        printf("���ļ�ʧ�ܣ���������ļ�����ʽ��");
        exit(1);
    }

    while((c=getc(f))!=EOF)
    {
        A[i]=c;
        i++;
    }
    A[i]='\0';
    for(i=0;i<strlen(A);i++)
    {
        printf("%c",A[i]);
    }
    fclose(f);

}
