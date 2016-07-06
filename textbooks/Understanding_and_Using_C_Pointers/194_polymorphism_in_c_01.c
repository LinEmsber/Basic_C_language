/* Polymorphism in C */

// Using C to do a implementation of object-oriented language such as C++.


typedef void (*f_ptr_set) (void *, int );
typedef int (*f_ptr_get) (void *);
typedef void (*f_ptr_display) ();

typedef struct _functions
{
	f_ptr_set set_x;
	f_ptr_set set_y;
	f_ptr_get get_x;
	f_ptr_get get_y;
	f_ptr_display display;
}virtual_functions;




typedef struct _shape
{
	virtual_functions functions;

	// base variables
	int x;
	int y;
}shape;


void shape_display(shape *s)
{
	printf("shape\n");
}

void shape_set_x(shape *s, int x)
{
	shape -> x = x;
}

void shape_set_y(shape *s, int y)
{
	shape -> y = y;
}

int shape_get_x(shape *s)
{
	return shape -> x;
}

int shape_get_y(shape *s)
{
	return shape -> y;
}

shape * get_shape_entry()
{
	shape *s = (shape *) malloc (sizeof(shape));

	s -> functions.set_x = shape_set_x;
	s -> functions.set_y = shape_set_y;
	s -> functions.get_x = shape_get_x;
	s -> functions.get_y = shape_get_y;
	s -> functions.display = shape_display;

	s -> x = 100;
	s -> y = 100;

	return s
}


int main()
{
	shape *s_ptr = get_shape_entry();
	s_ptr -> functions.set_x(s_ptr, 35);
	s_ptr -> functions.display();

	printf("%d\n", s_ptr -> functions.get_x(s_ptr));

	return 0;
}
