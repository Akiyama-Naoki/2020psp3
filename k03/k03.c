#include <stdio.h>
#include <string.h>

#define DEBUG

#define ALPHABET_LEN    255

char StrOriginal[] = "On a dark deseart highway, cool wind in my hair.";
char StrKey[] = "wind";

char* ForceSearch(char text[], char key[])
{
    //  ここを実装する
    int key_len, text_len, start, pos;
    char *result;
    result = NULL;
    text_len = strlen(text);
    key_len = strlen(key);

    for(start = 0; start < text_len; start++){
        pos = 0;
        while(pos < key_len){
            if(text[start + pos] != key[pos]){
                break;
            }else{
                result = &text[start];
            }

            pos++;
        }
        
        if(pos == key_len){
            break;
        }

    } 

    return result;
}

char* BMSearch(char text[], char key[])
{
    //  ここを実装する
    int key_len, text_len, index, i, pos, cn;
    char *result;
    result = NULL;
    int table[256];
    key_len = strlen(key);
    text_len = strlen(text);
    
    for(i = 0; i < 256; i++){
        table[i] = 4;
    }
    table['w'] = 1;
    table['i'] = 2;
    table['n'] = 3;
    table['d'] = 0;
     
    for(index = key_len - 1; index < text_len;){
        cn = 0;
        for(pos = key_len - 1; pos > 0; cn++){
            if(text[index - cn] == key[pos]){
                pos--;
            }else if(text[index - cn] == 'w'){
                index += table['w'];
                break;
            }else if(text[index - cn] == 'i'){
                index += table['i'];
                break;
            }else if(text[index - cn] == 'n'){
                index += table['n'];
                break;
            }else if(text[index - cn] == 'd'){
                index += table['d'];
                break;
            }else{
                index = index + table[index - cn];
                break;
            } 
        }
        

        if(pos == 0){
            result = &text[index - cn];
            break;
        }
    }

    return result;
}

int main(void)
{
    char*   str;
    str = ForceSearch(StrOriginal, StrKey);
    printf("Force Search. Find keyword at:%s\n", str);

    str = BMSearch(StrOriginal, StrKey);
    printf("BM Search. Find keyword at:%s\n", str);

    return 0;
}