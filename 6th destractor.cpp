class ObjOne {
friend class ObjTwo;
public:                  //constructors and some other random methods
    ObjOne(int n) {
    }

    ObjOne() {
    }

private:
    int currSize;
    int size;
    int *jon;
};


 class ObjTwo {
 public:                       //constructors and some other methods
     ObjTwo(ObjOne, int n) {}  //
     ObjTwo() {}
     ObjTwo(const ObjTwo &source) {    //copy constructor
        num = source.num;
        x = source.x;
        myObjOne=source.myObjOne;
     }
     ~ObjTwo() {                          //destructor
   delete &num;
           delete &x;
           delete &myObjOne;
      }


private:
    ObjOne myObjOne;
    int num, x;
	};  
