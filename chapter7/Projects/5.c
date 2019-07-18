#include <stdio.h>
#include <ctype.h>
int main()
{
		char ch ;
		int sum=0;
		printf("Enter phone number:");
		while((ch=getchar())!='\n'){
			switch(toupper(ch)){
				case 'A' :case 'E' :case 'I':
				case 'L' :case 'N' :case 'O':
				case 'R' :case 'S' :case 'T':
				case 'U':
					sum+=1;
					break;
				case 'G' :case 'D' :
					sum+=2;
					break;
				case 'B' :case 'C' :case 'M':
				case 'P':
					sum+=3;
					break;
				case 'F':case 'V' :case 'H':
				case 'W':case 'Y':
					sum+=4;
					break;
				case 'k':
					sum+=5;
					break;
				case 'J':case 'X':
					sum+=8;
					break;
				case 'Q':case 'Z':
					sum+=10;
					break;
			}
		}
		printf("Scrable value :%d", sum);
}



