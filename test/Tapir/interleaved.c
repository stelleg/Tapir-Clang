int bar();
int foo();

int interleaved_tests(int n){
  int w,x,y,z;
  spawn X { 
    w = bar(); 
  }
  x = foo();
  spawn Y {
    y = bar(); 
  }
  foo();
  sync X;
  foo();
  sync Y;
  return z;
}
