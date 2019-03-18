// C++ style
// Example is from http://web.mit.edu/sage/export/tmp/y/usr/share/doc/polybori/cudd/node5.html
// Added minor modifications.
// All credits go to the creator.
#include <iostream>
#include <cuddObj.hh>

int main (int argc, char *argv[]) { 
    Cudd mgr(0,0);
    BDD x = mgr.bddVar();
    BDD y = mgr.bddVar();
    BDD f = x * y;
    BDD g = y + !x;
    char const* inames[] = {"x", "y"};
    char const* onames[] = {"f", "g"};
    DdNode *Dds[] = {f.getNode(), g.getNode()};
    FILE* fp = fopen("graph.dot", "w");
    Cudd_DumpDot(mgr.getManager(), 2, Dds, (char**) inames, (char**) onames, fp);
    return 0;
}

/*
// C style
// Example is from http://davidkebo.com/cudd
// All credits go to the creator.
// Uncomment this if you want to use C style instead!
#include <iostream>
#include <util.h>
#include <cudd.h>

void print_dd (DdManager *gbm, DdNode *dd, int n, int pr )
{
    printf("DdManager nodes: %ld | ", Cudd_ReadNodeCount(gbm)); // Reports the number of live nodes in BDDs and ADDs
    printf("DdManager vars: %d | ", Cudd_ReadSize(gbm) ); // Returns the number of BDD variables in existence
    printf("DdManager reorderings: %d | ", Cudd_ReadReorderings(gbm) ); // Returns the number of times reordering has occurred
    printf("DdManager memory: %ld \n", Cudd_ReadMemoryInUse(gbm) ); // Returns the memory in use by the manager measured in bytes
    Cudd_PrintDebug(gbm, dd, n, pr);  // Prints to the standard output a DD and its statistics: number of nodes, number of leaves, number of minterms.
}

void write_dd (DdManager *gbm, DdNode *dd, char* filename)
{
    FILE *outfile; // output file pointer for .dot file
    outfile = fopen(filename,"w");
    DdNode **ddnodearray = (DdNode**)malloc(sizeof(DdNode*)); // initialize the function array
    ddnodearray[0] = dd;
    Cudd_DumpDot(gbm, 1, ddnodearray, NULL, NULL, outfile); // dump the function to .dot file
    free(ddnodearray);
    fclose (outfile); // close the file 
}

// This program creates a single BDD variable
int main (int argc, char *argv[]) { 
    DdManager *gbm; // Global BDD manager.
    char filename[30];
    gbm = Cudd_Init(0,0,CUDD_UNIQUE_SLOTS,CUDD_CACHE_SLOTS,0); // Initialize a new BDD manager.
    DdNode *bdd = Cudd_bddNewVar(gbm); //Create a new BDD variable
    Cudd_Ref(bdd); //Increases the reference count of a node
    bdd = Cudd_BddToAdd(gbm, bdd); //Convert BDD to ADD for display purpose
    print_dd (gbm, bdd, 2,4); //Print the dd to standard output
    sprintf(filename, "graph.dot"); //Write .dot filename to a string
    write_dd(gbm, bdd, filename);  //Write the resulting cascade dd to a file
    Cudd_Quit(gbm);
    return 0;
}
*/
