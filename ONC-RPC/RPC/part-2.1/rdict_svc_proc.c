/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "rdict.h"

static char dict[DICTSIZ][MAXWORD+1];/* storage for a dictionary of words	*/
static int	nwords = 0;

int *
initw_1_svc(void *argp, struct svc_req *rqstp)
{
    static int result;
	/*
	 * insert server code here
	 */
    printf("init !!!!!!!!!!\n");
    nwords = 0;
    result = 1;
	return &result;
}

int *
insertw_1_svc(char **argp, struct svc_req *rqstp)
{
    static int result;
	/*
	 * insert server code here
	 */
    printf("insert !!!!!!!!!!\n");
    strcpy(dict[nwords], *argp);
    printf("%s entree \n", *argp);
    printf("%s entree \n", dict[nwords]);  
	nwords++;
    printf("%d nwords \n", nwords);
    result = 1;
	return &result;
}

int *
deletew_1_svc(char **argp, struct svc_req *rqstp)
{
    static int result;
	/*
	 * insert server code here
	 */
    int	i;
    printf("delete !!!!!!!!!!\n");
	for (i=0 ; i<nwords ; i++){
		if (strcmp(*argp, dict[i]) == 0) {
			nwords--;
			strcpy(dict[i], dict[nwords]);
            result = 1;
            printf("%d nwords \n", nwords);
			return &result;
		}
    }
    result = -1;
	return &result;
}

int *
lookupw_1_svc(char **argp, struct svc_req *rqstp)
{
    static int result;
	/*
	 * insert server code here
	 */
    int	i;
    printf("lookup !!!!!!!!!!\n");
	for (i=0 ; i<nwords ; i++)
		if (strcmp(*argp, dict[i]) == 0){
			result = 1;
            return &result;
        }
    result = -1;
	return &result;
}