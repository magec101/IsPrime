#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char isPrimeMain(int argc, const char** argv) {
	
	int iNum;
	int i;
	
	if (argc < 2)
	{
		scanf("%d", &iNum);
	}
	else
		iNum = atoi(argv[1]);
		

	for(i=2;i<=iNum/2;++i)
  	{
      if(iNum % i==0)
      {
          return 'N';
      }
	 }
  
  	 return 'Y';
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, const char** argv){
    printf("%c", isPrimeMain(argc, argv));
    return 0;
}

#endif