//      Types of m/m allocation
//      
//      1)Static m/m allocation/Compile-time m/m allocation
//      -->During the compile time only it is decided which variable has to be given how much m/m, and this m/m is given during run-time
//         to the variables
//         eg: int x;
//             int *p;
//             float y;
//             complex c2;
//             student s1;
//      
//      2)Dynamic m/m allocation
//             
//      --> int *p=new int;             //"new" gives an "int" variable whose address gets stored in pointer "p"  
//      --> float *q=new float;         //   ____       ____
//      --> Complex *r=new Complex;     //  |1000|---->|    |(int variable given by "new" having address 1000)
//                                      //  |____|     |____|
//                                      //    p         1000
//
//	--> For creating a memory block dynmaically and assigning value to it
//		int *p=new int(56)	  ____       ____
//                                       |1000|---->| 56 |
//					 |____|     |____|
//					    p	     1000
//
//      1-D array creation using "new" keyword
//
//      --> int *t=new int[5]; or we can also write it like" int x;
//              an array of 5 "int" is created and         " cin>>x;
//              its address is stored in pointer "t"       " int *p=new int[x];
//
//                      //   ____       ____ ____ ____ ____ ____
//                      //  |1000|---->|    |    |    |    |    |
//                      //  |____|     |____|____|____|____|____|            
//                      //    t         1000 1004 1008 1012 1016
//
//      use of "delete" keyword
//
//      --> for freeing m/m resource it is used
//      
//      --> delete p; -->for 1 variable //here "p" doesn't gets deleted but m/m pointed by it gets deleted
//
//      --> delete []t; --> for an array //here "t" doesn't gets deleted but m/m(array) pointed by it gets deleted
                                                                                                                            1,19-24       Top

