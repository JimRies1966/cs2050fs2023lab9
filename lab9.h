#ifndef _LAB9_H
#define _LAB9_h

// Symbolic Constants
#define MAXSTRING 64

// Types
struct _Computer
{
	char	sCompany[MAXSTRING];	// Manufacturing company (e.g., Dell)
	char	sModel[MAXSTRING];		// (e.g., "XPS13")
	float	fltClockSpeed;			// Clock speed in HZ
	int		iDisk;					// Disk size in bytes
	int		iMemory;				// Memory size in bytes
};
typedef struct _Computer Computer;

// Prototypes

void * makeArray(int arraySize, int elementSize);
int getSize(void *array);
void freeArray(void *array);

// O(log(n))
int searchComputersByClockSpeed(Computer *array, Computer *query);
// O(log(n))
int searchComputersByCompanyAndModel(Computer *array, Computer *query);

// O(1)
int compareComputersByClockSpeed(Computer *a, Computer *b);
// O(1)
int compareComputersByCompanyAndModel(Computer *a, Computer *b);

#endif