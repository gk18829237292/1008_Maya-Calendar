#include<stdio.h>
#include<string.h>
int main()
{
	char * month1[19] = {"pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac",
		"ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};
	char * month2[20] = {"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok",
		"chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};
	int i,j, n;
	scanf("%d", &n);
	int num,year,sum;
	char mon[400];
	printf("%d\n", n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d. %s %d", &num, &mon, &year);
		for (j = 0; j < 19; j++)
		{
			if (strcmp(month1[j], mon) == 0)
				break;
		}
		sum = year * 365 + j * 20 + num;
		year = sum / 260;
		sum = sum % 260;
		printf("%d %s %d\n", sum % 13 + 1, month2[sum % 20], year);
	}
	return 1;
}
