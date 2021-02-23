// VTable.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <assert.h>

class BaseWithoutVirtuals
{
};

class BaseWithVirtuals
{
public:
    virtual void foo() {}
    virtual void foo2() {}
};

class BaseWithVirtualsAndMembers
{
public:
    virtual void foo() {}
    virtual void foo2() {}
private:
    int m_member;
};

class BaseWithVirtualsAndMembers2
{
public:
    virtual void foo3() {}
    virtual void foo4() {}
private:
    int m_member;
};

class DeriveFromMultiBases : public BaseWithVirtualsAndMembers, public BaseWithVirtualsAndMembers2
{
public:
    virtual void foo5() {}

private:
    int m_member;
};

class DeriveWithVirtualsAndMembers : public BaseWithVirtualsAndMembers
{
public:
    virtual void foo2() {}
private:
    int m_member_derive;
};

void CallVirtualFunction1()
{
    BaseWithVirtuals v;
    v.foo();
}

void CallVirtualFunction2()
{
    BaseWithVirtuals* v = new BaseWithVirtuals();
    v->foo();
    delete v;
}

void CallVirtualFunction3()
{
    BaseWithVirtuals* v = new BaseWithVirtuals();
    v->foo2();
    delete v;
}

void DifferentVTables()
{
    BaseWithVirtualsAndMembers base;
    DeriveWithVirtualsAndMembers derive;
}


struct IDevice
{
    virtual void Shutdown() = 0;
};

struct IMobile : public IDevice
{
};

struct IComputer : public IDevice
{

};

struct Computer : public IMobile, public IComputer
{
    void Shutdown()
    {
        return;
    }
};

void ComputerImplement()
{
    Computer* computer = new Computer();
    computer->Shutdown();
    delete computer;
}

void PointerCompare()
{
    Computer* computer = new Computer();
    IMobile* p1 = computer;
    IComputer* p2 = computer;

    bool reinterpret_compare = (reinterpret_cast<void*>(p2) == reinterpret_cast<void*>(computer));
    bool pointer_compare = p2 == computer;
}

int main()
{
    CallVirtualFunction1();
    CallVirtualFunction2();
    CallVirtualFunction3();
    DifferentVTables();
    ComputerImplement();
    PointerCompare();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
