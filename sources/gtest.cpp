#include <iostream>
#include <gtest/gtest.h>

class SubResource{
public:
    int a;
    SubResource() {
      std::cout << "SubResource acquired\n";
    }
    
    ~SubResource() { std::cout << "SubResource destroyed\n"; }

};

class Test : public ::testing::Test {
 protected:
  void SetUp() override {
   SubResource sr;
  }


};

TEST_F(Test, tp1)
{
    std::cout << "tp1 start" <<std::endl;
  ASSERT_EQ(1,1);
  std::cout << "tp1 end" <<std::endl;
}

int main(int argc, char **argv) {
    std::cout << "main" <<std::endl;
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
  
}