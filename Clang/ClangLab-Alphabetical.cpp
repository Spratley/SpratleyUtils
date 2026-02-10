// This is a demo file to showcase every .clang-format option.
// Feel free to run your own formatter on it to test your settings!
// Built with the assumption that ColumnWidth is 80,
// so keep that in mind for some formatting features
// Some examples from: https://clang.llvm.org/docs/ClangFormatStyleOptions.html
// I recommend using https://clang-format-configurator.site/ to test!

// -=-= AccessModifierOffset =-=-
class IndentTest
{
public:
    int x;

protected:
    float y;

private:
    double z;
};

// -=-= AlignAfterOpenBracket =-=-
void ThisIsAVeryLongFunctionNameToForceTheWrapLogic(int parameterOne, int parameterTwo, int parameterThree)
{
    auto result = anotherExtremelyLongFunctionCallToTriggerWrap(argumentOne, argumentTwo, argumentThree);
}

// -=-= AlignArrayOfStructures =-=-
struct Point
{
    int x;
    int y;
    const char* label;
};

Point points[] = {
  {  1,   5,     "top_left"},
  {100, 200, "bottom_right"},
  { 50,  50,       "center"}
};

// -=-= AlignConsecutiveAssignments =-=-
void AssignmentAlignment()
{
    int x = 1;
    int veryLongVariableName = 2;
    int compoundOperator += 3;
    // A comment in the middle
    veryLongVariableName = 10;

    x = 20;
}

// -=-= AlignConsecutiveBitFields =-=-
struct BitFieldAlignment
{
    int x : 1;
    int longBitFieldName : 12;
    // A comment in the middle
    int y : 1;

    int z : 1;
};

// -=-= AlignConsecutiveDeclarations =-=-
void DeclarationAlignment()
{
    int x = 1;
    double longVariableName = 2.0;
    int (*function)();
    void (*anotherFunction)(int) = nullptr;
    float* pointerVar = nullptr;
    // A comment in the middle
    int y = 3;

    unsigned int f1(void);
}

// -=-= AlignConsecutiveMacros =-=-
#define SHORT_NAME       42
#define LONGER_NAME      0x007f
#define MULTILINE_MACRO(x) \
  do {                     \
    foo(x);                \
  } while (0)
#define EVEN_LONGER_NAME(2)
// A comment in the middle
#define foo(x)           (x * x)

#define bar(y, z)        (y + z)

// -=-= AlignConsecutiveShortCaseStatements =-=-
switch (level)
{
    case log::info:
        return "info:";
    case log::warning:
        return "warning:";
    default:
        return "";
}

// -=-= AlignEscapedNewlines =-=-
#define A \
  int aaaa; \
  int b; \
  int dddddddddd;

// -=-= AlignOperands =-=-
int result = someVeryLongVariableNameThatLastsForAWhile + anotherExtremelyLongVariableNameThatAlsoLastsForAWhile
           - aThirdLongVariableNameToTestTheWrappingLogic;

// -=-= AlignTrailingComments =-=-
int value = 1; // This is a comment
int info = 2; // Another comment

int variableWithALongName = 3; // A third comment

// -=-= AllowAllArgumentsOnNextLine =-=-
void Foo()
{
    ThisIsAVeryLongFunctionNameToForceTheWrapLogic(argumentOne, argumentTwo, argumentThree);
}

// -=-= AllowAllParametersOfDeclarationOnNextLine =-=-
void FunctionWithManyParameters(int parameterOne, int parameterTwo, int parameterThree) {}

// -=-= AllowBreakBeforeNoexceptSpecifier =-=-
void ThisIsAVeryLongFunctionNameToForceTheWrapLogic(int arg1, double arg2) noexcept;
void ThisIsAVeryLongFunctionNameToForceTheWrapLogic(int arg1,
                                                    double arg2) noexcept(noexcept(Baz(arg1)) && noexcept(Baz(arg2)));

// -=-= AllowShortBlocksOnASingleLine =-=-
while (true) {}
while (true)
{
    continue;
}

// -=-= AllowShortCaseLabelsOnASingleLine =-=-
switch (a)
{
    case 1:
        x = 1;
        break;
    case 2:
        return;
}

// -=-= AllowShortCompoundRequirementOnASingleLine =-=-
template <typename T>
concept c = requires(T x) {
    { x + 1 } -> same_as<int>;
};

// -=-= AllowShortEnumsOnASingleLine =-=-
enum Color
{
    A,
    B
};

// -=-= AllowShortFunctionsOnASingleLine =-=-
class Foo
{
    void F() { Bar(); }
};

void F()
{
    Bar();
}

void F() {}

// -=-= AllowShortIfStatementsOnASingleLine =-=-
if (a)
    return;

if (b)
    return;
else if (b)
    return;
else
    return;

if (c)
    return;
else
{
    return;
}

// -=-= AllowShortLambdasOnASingleLine =-=-
auto emptyLambda = []() {};
auto lambda = [](int x, int y) { return x < y; };
// Lambda as an argument
sort(a.begin(), a.end(), [](int x, int y) { return x < y; });

// -=-= AllowShortLoopsOnASingleLine =-=-
while (true)
{
    continue;
}
for (int i = 0; i < 10; ++i)
    continue;

// -=-= AllowShortNamespacesOnASingleLine =-=-
namespace Foo
{
    void Bar();
}

// -=-= AlwaysBreakBeforeMultilineStrings =-=-
const char* string = "Foo"
                     "Bar";

// -=-= BinPackArguments =-=-
void F()
{
    F(aaaaaaaaaaaaaaaaaaaa, aaaaaaaaaaaaaaaaaaaa, aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
}

// -=-= BinPackLongBracedList =-=-
vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

// -=-= BinPackParameters =-=-
void Foo(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l) {}
void Bar(int a, int b) {}

// -=-= BitFieldColonSpacing =-=-
int x : 1;

// -=-= BraceWrapping =-=-
// AfterCaseLabel
switch (a)
{
    case 1:
    {
        x = 1;
        break;
    }
    case 2:
    {
        return;
    }
}

// AfterClass
class Foo
{
public:
    void Bar();
};

// AfterControlStatement
if (a)
{
    DoStuff();
    return;
}

if (longCondition && anotherLongCondition || yetAnotherLongCondition && finalLongCondition)
{
    DoStuff();
    return;
}

// AfterEnum
enum X : int
{
    B
};

// AfterFunction
void Foo()
{
    DoStuff();
    return;
}

// AfterNamespace
namespace Foo
{
    void Bar();
}

// AfterStruct
struct Point
{
    int x;
    int y;
};

// AfterUnion
union U
{
    int x;
    float y;
};

// AfterExternBlock
extern "C"
{
    void Foo();
}

// BeforeCatch
try
{
    DoStuff();
}
catch (const exception& e)
{
    HandleError(e);
}

// BeforeElse
if (Foo())
{
    DoStuff();
}
else
{
    DoStuff();
    return;
}

// BeforeLambdaBody
connect([]() {
    Foo();
    Bar();
});

// BeforeWhile
do
{
    foo();
} while (1);

// IndentBraces
if (a)
{
    DoStuff();
    return;
}

// SplitEmptyFunction
void Foo() {}

// SplitEmptyRecord
class Foo
{};

// SplitEmptyNamespace
namespace Foo
{
}

// -=-= BracedInitializerIndentWidth =-=-
void f()
{
    SomeClass c {
      "foo",
      "bar",
      "baz",
    };
    auto s = SomeStruct {
      .foo = "foo",
      .bar = "bar",
      .baz = "baz",
    };
    SomeArrayT a[3] = {
      {
       foo, bar,
       },
      {
       foo, bar,
       },
      SomeArrayT {      },
    };
}

// -=-= BreakAdjacentStringLiterals =-=-
return "Code"
       "\0\52\26\55\55\0"
       "x013"
       "\02\xBA";

// -=-= BreakAfterAttributes =-=-
[[maybe_unused]]
const int i;
[[gnu::const]] [[maybe_unused]]
int j;

[[nodiscard]]
inline int F();
[[gnu::const]] [[nodiscard]]
int G();

[[likely]]
if (a)
    F();
else
    G();

switch (b)
{
    [[unlikely]]
    case 1:
        ++b;
        break;
    [[likely]]
    default:
        return;
}

// -=-= BreakAfterOpenBracketBracedList =-=-
vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

// -=-= BreakAfterOpenBracketFunction =-=-
void ThisIsAVeryLongFunctionNameToForceTheWrapLogic(int parameterOne, int parameterTwo, int parameterThree);

// -=-= BreakAfterOpenBracketIf =-=-
if constexpr (someReallyLongConditionThatWillTriggerTheWrappingLogic
              || anotherLongConditionThatWillAlsoTriggerTheWrappingLogic)
{
    DoStuff();
    return;
}

// -=-= BreakAfterOpenBracketLoop =-=-
while (someReallyLongConditionThatWillTriggerTheWrappingLogic
       || anotherLongConditionThatWillAlsoTriggerTheWrappingLogic)
{
    DoStuff();
    return;
}

// -=-= BreakAfterOpenBracketSwitch =-=-
switch (someReallyLongConditionThatWillTriggerTheWrappingLogic
        || anotherLongConditionThatWillAlsoTriggerTheWrappingLogic)
{
    default:
        return;
}

// -=-= BreakAfterReturnType =-=-
class A
{
    int F() { return 0; };
};
int F();
int F()
{
    return 1;
}
int LongName::AnotherLongName();

// -=-= BreakBeforeBinaryOperators =-=-
LooooooooooongType loooooooooooooooooooooongVariable = someLooooooooooooooooongFunction();

bool value = aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
            == aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
          && aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa > ccccccccccccccccccccccccccccccccccccccccc;

// -=-= BreakBeforeBraces =-=-
namespace N
{
    enum E
    {
        E1,
        E2,
    };

    class C
    {
    public:
        C();
    };

    bool baz(int i)
    {
        try
        {
            do
            {
                switch (i)
                {
                    case 1:
                    {
                        foobar();
                        break;
                    }
                    default:
                    {
                        break;
                    }
                }
            } while (--i);
            return true;
        }
        catch (...)
        {
            handleError();
            return false;
        }
    }

    void foo(bool b)
    {
        if (b)
        {
            baz(2);
        }
        else
        {
            baz(5);
        }
    }

    void bar()
    {
        foo(true);
    }
}

// -=-= BreakBeforeCloseBracketBracedList =-=-
vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

// -=-= BreakBeforeCloseBracketFunction =-=-
void ThisIsAVeryLongFunctionNameToForceTheWrapLogic(int parameterOne, int parameterTwo, int parameterThree);

// -=-= BreakBeforeCloseBracketIf =-=-
if constexpr (someReallyLongConditionThatWillTriggerTheWrappingLogic
              || anotherLongConditionThatWillAlsoTriggerTheWrappingLogic)
{
    DoStuff();
    return;
}

// -=-= BreakBeforeCloseBracketLoop =-=-
while (someReallyLongConditionThatWillTriggerTheWrappingLogic
       || anotherLongConditionThatWillAlsoTriggerTheWrappingLogic)
{
    DoStuff();
    return;
}

// -=-= BreakBeforeCloseBracketSwitch =-=-
switch (someReallyLongConditionThatWillTriggerTheWrappingLogic
        || anotherLongConditionThatWillAlsoTriggerTheWrappingLogic)
{
    default:
        return;
}

// -=-= BreakBeforeConceptDeclaration =-=-
template <typename T>
concept c = requires(T x) {
    { x + 1 } -> same_as<int>;
};

// -=-= BreakBeforeInlineASMColon =-=-
asm volatile("string", : : val);
asm("cmoveq %1, %2, %[result]" : [result] "=r"(result) : "r"(test), "r"(new), "[result]"(old));

// -=-= BreakBeforeTemplateCloser =-=-
template <typename Foo, typename Bar>

// -=-= BreakBeforeTernaryOperators =-=-
int result = someReallyLongConditionThatWillTriggerTheWrappingLogic ? valueIfTrue : valueIfFalse;

// -=-= BreakBinaryOperations =-=-
aaaaaaaaaaaaa + bbbbbbbbbbbbbbbbbbbbbbbbbbb + ccccccccccccccccccccccc + ddddddddddddddddddddddddddd
  + eeeeeeeeeeeeeeeeeeeeeeeeee;

// -=-= BreakConstructorInitializers =-=-
Constructor() : initializer1(), initializer2(), initializer3() {}

// -=-= BreakFunctionDefinitionParameters =-=-
void ThisIsAVeryLongFunctionNameToForceTheWrapLogic(int parameterOne, int parameterTwo, int parameterThree);

// -=-= BreakInheritanceList =-=-
class Derived : public Base1, public Base2, public Base3
{};

// -=-= BreakStringLiterals =-=-
const char* string = "This is a very long string literal that will trigger the wrapping logic.";

// -=-= BreakTemplateDeclarations =-=-
template <typename T>
T Foo()
{}

template <typename T>
T Foo(int veryLongParameterNameThatWillTriggerTheWrappingLogic,
      int anotherVeryLongParameterNameThatWillAlsoTriggerTheWrappingLogic)
{}

// -=-= ColumnLimit =-=-
01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890 0 10 20 30 40 50 60 70 80 90 100;

// -=-= CompactNamespaces =-=-
namespace Foo
{
    namespace Bar
    {
        namespace VeryLongNamespaceNameToTriggerWrappingLogic
        {
        }
    }
}

// -=-= ConstructionInitializerIndentWidth =-=-
Constructor() : initializer1(), initializer2(), initializer3() {}

// -=-= ContinuationIndentWidth =-=-
int i = //  VeryVeryVeryVeryVeryLongComment
  longFunction( // Again a long comment to trigger wrapping logic
    arg);

// -=-= Cpp11BracedListStyle =-=-
vector<int> x {1, 2, 3, 4};
vector<T> x {{}, {}, {}, {}};
f(MyMap[{composite, key}]);
new int[3] {1, 2, 3};
Type name {// Comment
           value};

// -=-= EmptyLineAfterAccessModifier =-=-
struct Foo
{
private:
    int i;

protected:
    int j;
    /* Comment */
public:
    Bar() {}

private:
protected:
};

// -=-= EmptyLineBeforeAccessModifier =-=-
struct Foo
{
private:
    int i;

protected:
    int j;
    /* Comment */
public:
    Bar() {}

private:
protected:
};

// -=-= EnumTrailingComments =-=-
enum
{
    A,
    B,
    C
};
enum
{
    D,
    E,
    F,
};

// -=-= FixNamespaceComments =-=-
namespace LongNamespace
{
    void Foo();
    void Bar();
}
namespace ShortNamespace
{
}

// -=-= IncludeBlocks =-=-
#include "b.h"

#include <lib/main.h>
#include "a.h"

// -=-= IndentAccessModifiers =-=-
struct Foo
{
private:
    int i;

protected:
    int j;

public:
    Bar() {}
};

// -=-= IndentCaseBlocks =-=-
switch (foo)
{
    case 1:
    {
        Bar();
    }
    break;
    default:
    {
        return;
    }
}

// -=-= IndentCaseLabels =-=-
switch (foo)
{
    case 1:
        Bar();
        break;
    default:
        return;
}

// -=-= IndentExportBlock =-=-
export {
    void Foo();
    void Bar();
}

// -=-= IndentExternBlock =-=-
extern "C"
{
    void Foo();
    void Bar();
}

// -=-= IndentGotoLabels =-=-
void Foo()
{
    if (Bar())
    {
    label1:
        return;
    }
label2:
    return;
}

// -=-= IndentPPDirectives =-=-
#if FOO
    #if BAR
        #include <foo>
    #endif
#endif

// -=-= IndentRequiresClauses =-=-
template <typename T>
requires SomeConcept<T>
void Foo()
{}

// -=-= IndentWrappedFunctionNames =-=-
LoooooooooooooooooooooooooooooooooooooooongReturnType LoooooooooooooooooooooooooooooooongFunctionDeclaration();

// -=-= InsertBraces =-=-
if (a)
    return;
else
    return;

// -=-= IntegerLiteralSeparator =-=-
int binary = 0b10101001010101101010;
int decimal = 1234567890;
int hexadecimal = 0xDEADBEEFDEADBEEF;

// -=-= KeepEmptyLines =-=-
void Foo()
{
    int x = 1;

    // A comment in the middle

    int y = 2;
}

// -=-= LambdaBodyIndentation =-=-
someMethod([](SomeReallyLongLambdaSignatureArgument foo) { return; });

someMethod(someOtherMethod([](SomeReallyLongLambdaSignatureArgument foo) { return; }));

// -=-= MaxEmptyLinesToKeep =-=-
int Foo()
{
    int i = 1;

    i = Bar();

    return i;
}

// -=-= NamespaceIndentation =-=-
namespace Foo
{
    double foo;
    namespace Bar
    {
        int bar;
    }
}

// -=-= NumericLiteralCase =-=-
Exponent = 6.02e23 + 1.0E10;
HexDigit = 0xaBcDeF;
Prefix = 0XF0 | 0b1;
Suffix = 1uLL;

// -=-= PPIndentWidth =-=-
#if FOO
    #define BAR
#else
    #define NOT_BAR
#endif

// -=-= PackConstructorInitializers =-=-
Constructor()
    : initializer1()
    , initializer2()
    , initializer3()
    , initializer4()
    , initializer5()
    , aVeryLongInitializerThatWraps()
{}

// -=-= PointerAlignment =-=-
int* pointer;

// -=-= QualifierAlignment =-=-
int const a;
const int* a;

// -=-= QualifierOrder =-=-
const inline static friend constexpr volatile restrict int;

// -=-= ReferenceAlignment =-=-
int& reference;

// -=-= ReflowComments =-=-

// veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongComment with plenty of information
/* second veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongComment with plenty of information */
/* third veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongComment with plenty of information
 * and a misaligned second line */

// -=-= RemoveEmptyLinesInUnwrappedLines =-=-
int c

  = 1;

enum

{
    AA = 0,
    BB
} myEnum;

while (

  true)
{}

// -=-= RemoveParentheses =-=-
if ((a && b) || (c && d)) {}
class __declspec((dllimport)) X
{};
return (((i)));

// -=-= RemoveSemicolons =-=-
int Foo(int a, int b)
{
    return a + b;
};

// -=-= RequiresClausePosition =-=-
template <typename T>
requires SomeConcept<T>
struct Foo
{};

template <typename T>
void Bar() requires SomeConcept<T>
{}

// -=-= RequiresExpressionIndentation =-=-
template <typename T>
concept C = requires(T x) {
    { x + 1 } -> same_as<int>;
    { x - 1 } -> same_as<int>;
};

// -=-=SeparateDefinitionBlocks =-=-
#include <cstring>
struct Foo
{
    int a, b, c;
};
namespace Namespace
{
    class Bar
    {
    public:
        void Foo();
    } class Luigi
    {};
}
class C
{};

// -=-= ShortNamespaceLines =-=-
namespace Foo
{
    void Bar();
}

// -=-= SortIncludes =-=-
#include "b.h"
#include "A/b.h"
#include "a/A.h"
#include "b.inl"
#include <vector>
#include "my_project/local.h"
#include <gtest/gtest.h>
#include "another_local.h"
#include <algorithm>

// -=-= SortUsingDeclarations =-=-
using std::vector;
using std::string;
using std::map;
using boost::regex;
using boost::regex_constants::icase;
using std::chrono::duration_cast;

// -=-= SpaceAfterCStyleCast =-=-
int i = (int)3.14;

// -=-= SpaceAfterLogicalNot =-=-
!someExpression();

// -=-= SpaceAfterOperatorKeyword =-=-
bool operator==(int a);

// -=-= SpaceAfterTemplateKeyword =-=-
template <typename T>
void Foo() {}

// -=-= SpaceAroundPointerQualifiers =-=-
void* const* x = NULL;

// -=-= SpaceBeforeAssignmentOperators =-=-
int x = 1;
x += 2;

// -=-= SpaceBeforeCaseColon =-=-
switch (foo)
{
    case 1: break;
    default: return;
}

// -=-= SpaceBeforeCpp11BracedList =-=-
Foo foo{bar};
Foo{};
vector<int>{1, 2, 3};
new int[3]{1, 2, 3};

// -=-= SpaceBeforeCtorInitializerColon =-=-
Constructor() : a(a) {}

// -=-= SpaceBeforeInheritanceColon =-=-
class Derived : public Base {};

// -=-= SpaceBeforeParens =-=-
void Foo();

void Foo() {
  if (true) {
    F();
    G(x, y, z);
  }

  MACRO(...){
    F();
  }

  FOREACH(...);
  IF(...);

  return not(a||b);
}

void operator++(int a);
object.operator++(0);

new(buf) T;
delete(buf) T;

template<typename T>
requires(SomeConcept<T>){ return; }

void F();
void F(int a);

// -=-= SpaceBeforeRangeBasedForLoopColon =-=-
for (auto& element : container) {}

// -=-= SpaceBeforeSquareBrackets =-=-
int array[10];
int* pointer[10][20];

// -=-= SpaceInEmptyBraces =-=-
void f() { }
class Unit { };
auto a = [] { };
int x{ };

// -=-= SpacesBeforeTrailingComments =-=-
void F() {
  if (true) {   // Foo
    F();        // Bar
  }             // Yeah
}

// -=-= SpacesInAngles =-=-
static_cast<int>(arg);
std::function<void(int)> fct;

// -=-= SpacesInParens =-=-
void f() {
  if(true) {
    f();
  }
}

// -=-= SpacesInParensOptions =-=-
 __decltype__(( x ))
if (( a = b ))
if (a) {}
int x = (int)y;
void F() { Foo(); }
T F(Deleted&)& = delete;

// -=-= SpacesInSquareBrackets =-=-
int array[10];

// -=-= WrapNamespaceBodyWithEmptyLines =-=-
namespace Foo
{
    namespace Bar
    {
        void FooBar();
    }
}