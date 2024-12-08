#include <iostream>

void deletElement(int** arr, int* size, bool flag);
void addElement(int** arr, int* size, int element, bool flag);

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);
    int* a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &*(a + i));
    }
    int elem = 5;

    addElement(&a, &n, elem, true); 

    for (int i = 0; i < n; ++i)
        printf("%d ", *(a + i));

    printf("%\n");
    deletElement(&a, &n, false);

    for (int i = 0; i < n; ++i)
        printf("%d ", *(a + i));

    return 0;
}


void addElement(int** arr, int* size, int element, bool flag) // false - добавить в начало, true - в конец
{   
    int* new_arr = (int*)malloc(sizeof(int) * (*size + 1));
    if (new_arr != nullptr)
    {
        if (flag)
        {
            for (int i = 0; i < *size; i++)
                new_arr[i] = (*arr)[i];
            new_arr[*size] = element;
        }
        else
        {
            new_arr[0] = element;
            for (int i = 1; i < *size + 1; i++)
                new_arr[i] = (*arr)[i];
        }
        free(*arr);
        *arr = new_arr;
        (*size)++;
    }
}

void deletElement(int** arr, int* size, bool flag) // false - удалить из начала, true - из конца
{   
    int* new_arr = (int*)malloc(sizeof(int) * ((*size) - 1));
    if (new_arr != nullptr) 
    {
        if (flag)
        {
            for (int i = 0; i < (*size) - 1; i++)
                new_arr[i] = (*arr)[i];
        }
        else
        {
            for (int i = 1; i < (*size); i++)
                new_arr[i - 1] = (*arr)[i];
        }
        free(*arr);
        *arr = new_arr;
        (*size)--;
    }
}