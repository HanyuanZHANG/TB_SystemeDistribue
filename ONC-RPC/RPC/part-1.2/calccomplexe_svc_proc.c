/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calccomplexe.h"

struct complexe {
	int pentiere;
	float pimaginaire;
};
static struct complexe courante;

int *
add_1_svc(complexe *argp, struct svc_req *rqstp)
{
	static int result;

	/*
	 * insert server code here
	 */
    
    courante.pentiere += *argp.pentiere;
    courante.pimaginaire += *argp.pimaginaire;
    printf ("courante add %d \n", courante);
    printf ("arg add %d \n", *argp);
    result = courante.pentiere;

	return &result;
}

int *
mul_1_svc(complexe *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	return &result;
}

void *
init_1_svc(complexe *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	return (void *) &result;
}