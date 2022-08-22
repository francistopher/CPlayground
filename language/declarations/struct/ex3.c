struct y; // starting off
struct x {struct y *p; /*yad yada yada*/}; // ready set go
struct y {struct x *q; /* yada yada yada*/}; // ready set go

//struct s* p = NULL; // naming unknown struct, no bueno for clang
struct s {int alcohol_percentage;}; // definition for the struct pointed to by p

int main(void)
{
    struct s;
   // struct s *p;
   // struct s { char* p; };
}


