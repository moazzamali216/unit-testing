#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;
using ::testing::Invoke;




class DatabaseConnect{
    public:
    virtual bool login(string username, string password){
      cout<<'Login cwalled'<<endl;  return true;};
    virtual bool login2(string username, string password){return true;};
    virtual bool logout(string username){return true;};
    virtual int fetchRecord(){return -1;};

};

class MockDB : public DatabaseConnect{
    public:
        MOCK_METHOD0(fetchRecord,int());
        MOCK_METHOD1(logout,bool(string username));
        MOCK_METHOD2(login,bool(string username,string password));
        MOCK_METHOD2(login2,bool(string username,string password));

};

class myDataBase{
    DatabaseConnect &dbc;
    public:

    myDataBase(DatabaseConnect & _dbc):dbc(_dbc){}
    int Init(string username, string password){

           if(dbc.login(username,password)!=true){
            if(dbc.login(username,password)!=true){
            cout<<"DB Failure wnd Time"; return -1;
            }
        }
        else{
            'DB Success';return 1;
        }
 };
    };



struct testABC{
    bool dummylogin(string a,string b){
        cout<<"Dummy Login gets called";
    };
};
TEST(DataBase,loginTest){
    MockDB mdb;
    myDataBase db(mdb);
    DatabaseConnect dbTest;
    // ON_CALL(mdb,login(_,_)).WillByDefault(Return(true));
    // ON_CALL(mdb,login2(_,_)).WillByDefault(Return(true));

    EXPECT_CALL(mdb, login(_,_))
        .Times(AtLeast(1))       
        .WillOnce(Invoke(&dbTest,&DatabaseConnect::login));  

    int retValue = db.Init("Moazzam","Ali");

    EXPECT_EQ(retValue,1);
}
// TEST(DataBase, loginFailure) {
//     MockDB mdb;
//     myDataBase db(mdb);

//     // Expect that login will be called at least 2 times and return false both times
//     EXPECT_CALL(mdb, login("Moazzam", "mah.mac220"))
//         .Times(AtLeast(2))        // Expect at least two calls to login
//         .WillRepeatedly(Return(false));  // Return false for both calls

//     int retValue = db.Init("Moazzam", "mah.mac220");

//     EXPECT_EQ(retValue, -1);  // Expect that Init() returns -1 (login failure)
// }
int main(int argc, char **argv) {



    ::testing::InitGoogleTest(&argc, argv);  // Initialize Google Test
    return RUN_ALL_TESTS();  // Run all tests and return the result
};