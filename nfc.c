#include "stdio.h"
#include "math.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

typedef union{
	struct{
		char uil[4];
		char data[8];
	}frame;
	char data_[12];
}nfc;

char* transmit(char* uil,char* data,char* data_) {
	  gets(uil);
	  gets(data);
	  return data_;
}
int main() {
	nfc nfc;
	printf("nfc = %s",transmit(nfc.frame.uil,nfc.frame.data,nfc.data_));
}