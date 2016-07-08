/* An example of realloc with detial explanation. */

#include <stdio.h>

int main()
{
	int *ptr;
	int *ptr_realloc;
	int count = 5;

	// void *realloc(void *ptr, size_t size);
	//
	// The realloc() function changes the size of the memory block pointed
        // to by ptr to size bytes.
	//
	// If the new size is larger than the old size, the added memory will
	// not be initialized.
	//
	// If ptr is NULL, then the call is equivalent to malloc(size), for all
	// values of size.
	//
	// If size is equal to zero, and ptr is not NULL, then the call is
	// equivalent to free(ptr).
	//
	// If the area pointed to was moved, a free(ptr) is done.
	//
        // Unless ptr is NULL, it must have been returned by an earlier call to
        // malloc(), calloc() or realloc().

	ptr = (int *)malloc( sizeof(int) );
	ptr_realloc = (int *)realloc(ptr, count * sizeof(int) );


	// reallocate ptr
	if(ptr_realloc == NULL){

		printf("\nExiting!!");
		free(ptr);
		exit(0);

	// the realloc() succeeded, we can overwrite the original pointer.
	}else{
		ptr = ptr_realloc;
	}

}
