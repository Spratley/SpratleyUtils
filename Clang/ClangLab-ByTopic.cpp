// This is a demo file to showcase every .clang-format option.
// Feel free to run your own formatter on it to test your settings!
// Built with the assumption that ColumnWidth is 80,
// so keep that in mind for some formatting features
// Some examples from: https://clang.llvm.org/docs/ClangFormatStyleOptions.html
// I recommend using https://clang-format-configurator.site/ to test!

//  Function Declarations:
//      AlignAfterOpenBracket
//      AllowAllParametersOfDeclarationOnNextLine
//      AllowBreakBeforeNoexceptSpecifier
//      BinPackParameters
//      BreakAfterOpenBracketFunction
//      BreakAfterReturnType
//      BreakBeforeCloseBracketFunction
//      IndentWrappedFunctionNames

void ThisIsAVeryLongFunctionNameToForceWrappingLogic(int parameterA, int parameterB, int parameterC, int parameterD, int parameterE, int parameterF);
void ThisIsAVeryLongFunctionNameToForceWrappingLogic(int parameterA, int parameterB, int parameterC);

void Foo(int parameterA, int parameterB, int parameterC);

LoooooooooooooooooooooooooooooooooooooooongReturnType LoooooooooooooooooooooooooooooooongFunctionDeclaration();

SomeScope::ReturnType AnotherScope::Foo();

void ThisIsAVeryLongFunctionNameThatWillNeverThrowException(int parameterA) noexcept;
void ThisIsAVeryLongFunctionNameThatMightThrow(T a) noexcept(noexcept(T::Foo()) && noexcept(Bar(a)));

// Function Definitions:
//     AlignAfterOpenBracket
//     AllowBreakBeforeNoexceptSpecifier
//     AllowShortFunctionsOnASingleLine
//     BinPackParameters
//     BraceWrapping -> AfterFunction
//     BraceWrapping -> SplitEmptyFunction
//     BreakAfterOpenBracketFunction
//     BreakAfterReturnType
//          (AlwaysBreakAfterDefinitionReturnType if not an option)
//     BreakBeforeBraces
//     BreakBeforeCloseBracketFunction
//     BreakFunctionDefinitionParameters
//     IndentWrappedFunctionNames
//     SpaceBeforeParens
//     SpaceInEmptyBraces

void ThisIsAVeryLongFunctionNameToForceWrappingLogic(int parameterA, int parameterB, int parameterC, int parameterD, int parameterE, int parameterF)
{
    DoStuff();
    return;
}

void ThisIsAVeryLongFunctionNameToForceWrappingLogic(int parameterA, int parameterB, int parameterC) {}

void Foo(int parameterA, int parameterB, int parameterC)
{
    return;
}

LoooooooooooooooooooooooooooooooooooooooongReturnType LoooooooooooooooooooooooooooooooongFunctionDeclaration() 
{
    Foo();
    return;
}

SomeScope::ReturnType AnotherScope::Foo()
{
    return;
}

// Function Calls:
//     AlignAfterOpenBracket
//     AllowAllArgumentsOnNextLine
//     BinPackArguments
//     BreakAfterOpenBracketFunction (?)
//     BreakBeforeCloseBracketFunction (?)

int main()
{
    Foo();
    Bar(a, b, c, Foo());
    ThisIsAVeryLongFunctionNameToForceWrappingLogicWhenCalling(10, 20.0f, 0xDEADBEEF);
    float x = ThisIsAVeryLongFunctionNameToForceWrappingLogicWhenCalling(10, 20.0f, 0xDEADBEEF);
}

// If Statements:
//     AllowShortIfStatementsOnASingleLine
//     BraceWrapping -> AfterControlStatement
//     BraceWrapping -> BeforeElse
//     BreakAfterOpenBracketIf
//     BreakBeforeBraces
//     BreakBeforeCloseBracketIf
//     InsertBraces
//     SpaceBeforeParens
//     SpaceInEmptyBraces
//     SpacesInParens
//     SpacesInParensOptions -> InConditionalStatements

if (a) 
{
    return;
}

if (aVeryLongCondition || anotherExtremelyLongCondition && (someValue + anotherValue) > aThirdValue)
{
    return;
}

if (a)
{
    DoStuff();
    DoMoreStuff();
}
else if (b)
{
    return;
}
else
{
    DoStuff();
    return;
}

// Switch Statements:
//     AlignConsecutiveShortCaseStatements
//     AllowShortCaseLabelsOnASingleLine
//     BraceWrapping -> AfterCaseLabel
//     BreakAfterOpenBracketSwitch
//     BreakBeforeBraces
//     BreakBeforeCloseBracketSwitch
//     IndentCaseBlocks
//     IndentCaseLabels
//     SpaceBeforeCaseColon
//     SpaceBeforeParens
//     SpaceInEmptyBraces

switch (foo)
{
    case a: return 1;
    case B::c: return 2;

    case AfterNewline: return 4;
    // A comment in the way
    default: return 3;
}

switch (bar)
{
    case fooBar:
        {
            DoStuff();
        }
        break;
    default:
        break;
}

switch (fooBar) {}

// Loops:
//     AllowShortLoopsOnASingleLine
//     BraceWrapping -> AfterControlStatement
//     BraceWrapping -> BeforeWhile
//     BreakAfterOpenBracketLoop
//     BreakBeforeBraces
//     BreakBeforeCloseBracketLoop
//     InsertBraces
//     SpaceBeforeParens
//     SpaceBeforeRangeBasedForLoopColon
//     SpaceInEmptyBraces

for (int i = 0; i < foo; ++i) 
{ 
    a += i;
}

while (aVeryLongCondition || anotherExtremelyLongCondition && (someValue + anotherValue) > aThirdValue)
{
    DoStuff();
    return;
}

for (auto item : array) { continue; }

do {} while(false);

// Casting:
//     SpaceAfterCStyleCast
//     SpacesInAngles
//     SpacesInParens
//     SpacesInParensOptions -> InCStyleCasts

int x = (int)y;
float y = static_cast<float>(x);

// Try Catch:
//     BraceWrapping -> AfterControlStatement
//     BraceWrapping -> BeforeCatch
//     BreakBeforeBraces
//     SpaceBeforeParens
//     SpaceInEmptyBraces

try (someCondition)
{
    DoStuff();
}
catch (const Exception& e)
{
    HandleException(e);
    return;
}

try (someConditionWithAVerylongName && anotherConditionWithAVeryLongName || aThirdConditionWithALongName)
{

}
catch ()
{

}

// Code Blocks:
//     AllowShortBlocksOnASingleLine
//     BraceWrapping -> IndentBraces
//     BreakBeforeBraces
//     InsertBraces
//     SpaceInEmptyBraces

void DoStuff()
{
    {
        DoStuffInLocalScope();
    }

    {}
}

// Comments:
//     AlignTrailingComments
//     ReflowComments
//     SpacesBeforeTrailingComments

// veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongComment with plenty of information
       /* second veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongComment with plenty of information */
       /* third veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongComment with plenty of information
            * and a misaligned second line */

int a; // Does A Stuff
double b; // Does B Stuff

float c; // Does C Stuff

// Includes:
//     IncludeBlocks
//     SortIncludes

#include "b.h"
#include "A/b.h"
#include "a/A.h"
#include "b.inl"
#include <vector>
#include "my_project/local.h"

#include <gtest/gtest.h>
#include "another_local.h"
#include <algorithm>

// Macros:
//     AlignConsecutiveMacros
//     AlignEscapedNewLines
//     SpaceBeforeParens

#define SHORT_NAME       42
#define LONGER_NAME      0x007f
#define MULTILINE_MACRO(x) \
  do {                     \
    bar(x);                \
    foo(x);                \
  } while (0)
#define EVEN_LONGER_NAME(2)
// A comment in the middle
#define foo(x)           (x * x)

#define bar(y, z)        (y + z)

// PreProcessor Directives:
//     IndentPPDirectives
//     PPIndentWidth

#if FOO
#if BAR
#include <foo>
#endif
#endif

// Namespaces:
//     AllowShortNamespacesOnASingleLine
//     BraceWrapping -> AfterNamespace
//     BraceWrapping -> SplitEmptyNamespace
//     BreakBeforeBraces
//     CompactNamespaces
//     FixNamespaceComments
//     NamespaceIndentation
//     ShortNamespaceLines
//     SpaceInEmptyBraces
//     WrapNamespaceBodyWithEmptyLines

namespace Foo {
    namespace Bar{

    }    
}

namespace Foo {
    void Foo();
    int bar;
}

// Classes and Structs:
//     AccessModifierOffset
//     BraceWrapping -> AfterClass
//     BraceWrapping -> AfterStruct
//     BraceWrapping -> SplitEmptyRecord
//     BreakBeforeBraces
//     BreakInheritanceList
//     EmptyLineAfterAccessModifier
//     EmptyLineBeforeAccessModifier
//     IndentAccessModifiers
//     SpaceBeforeInheritanceColon
//     SpaceInEmptyBraces

class Foo : public BarWithALongNameThatItWrapsJustOnItsOwnWithoutTheOtherParents, protected FooBase, private WhoUsesPrivateInheritance
{
public:
    Foo(int a, int b);
    void Bar() const {}

private:
    int a;
    int b;
};

struct Bar
{}

// Constructor Initializer Lists:
//     BreakConstructorInitializers
//     ConstructionInitializerIndentWidth
//     PackConstructorInitializers
//     SpaceBeforeCtorInitializerColon

Foo::Foo(int someParameterWithAREallyLongName, float anotherParameterWithAReallyLongName)
    : someMember(someParameterWithAREallyLongName)
    , someOtherMember(anotherParameterWithAReallyLongName)
    , a()
    , b(2.0f)
    , c(false)
{}

// OperatorOverloads:
//     SpaceAfterOperatorKeyword
//     SpaceBeforeParens

bool operator<=(Type const& rhs);

// Variable Declarations:
//     AlignConsecutiveAssignments
//     AlignConsecutiveDeclarations
//     SpaceBeforeAssignmentOperators
int x = 1;
double longVariableName = 2.0;

float y = 20.0f;
// A comment in the middle
void* z = &x;
void (*anotherFunction)(int) = nullptr;
*pointerVar = nullptr;
// A comment in the middle
int y = 3;
veryLongVariableName = 10;

int compoundOperator += 3;
x = 20;

// String Literals:
//     AlwaysBreakBeforeMultilineStrings
//     BreakAdjacentStringLiterals
//     BreakStringLiterals

const char* string = "Foo"
                     "Bar";

return "Code"
       "\0\52\26\55\55\0"
       "x013"
       "\02\xBA";

const char* anotherString = "VeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongString";

// Integer Literals:
//     IntegerLiteralSeparator
//     NumericLiteralCase

int binary = 0b10101001010101101010;
int decimal = 1234567890;
int hexadecimal = 0xDEADBEEFDEADBEEF;

Exponent = 6.02e23 + 1.0E10;
HexDigit = 0xaBcDeF;
Prefix = 0XF0 | 0b1;
Suffix = 1uLL;

// Pointers and References
//     PointerAlignment
//     ReferenceAlignment
//     SpaceAroundPointerQualifiers

int* a;
double& b;
void *const *c = NULL;

// Qualifiers
//     QualifierAlignment
//     QualifierOrder

int const a;
const int b;
const inline static friend constexpr volatile restrict int;

// Operand Expressions:
//     AlignOperands
//     BreakBeforeBinaryOperators
//     BreakBeforeTernaryOperators
//     BreakBinaryOperations

int result = someVeryLongVariableNameThatLastsForAWhile +
             anotherExtremelyLongVariableNameThatAlsoLastsForAWhile -
             aThirdLongVariableNameToTestTheWrappingLogic;

double value = someVeryLongConditionWithAnAbsurdName ? someValueWithAReallyLongName : (someOtherValue + anotherValue);

// Logical Expressions:
//     SpaceAfterLogicalNot

if (!a && !b)
{
    return;
}

// Arrays:
//     AlignArrayOfStructures
//     SpaceBeforeSquareBrackets
//     SpaceInEmptyBraces
//     SpacesInSquareBrackets

Point points[] = {{1, 5, "top_left"}, {100, 200, "bottom_right"}, {50, 50, "center"}};

int x[10][20] {}

// Braced Lists:
//     BinPackLongBracedLists
//     BracedInitializerIndentWidth
//     BreakAfterOpenBracketBracedList
//     BreakBeforeCloseBracketBracedList
//     Cpp11BracedListStyle
//     SpaceBeforeCpp11BracedList
//     SpaceInEmptyBraces

vector<int> v = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

SomeClass c {"foo", "bar", "baz"};

auto s = SomeStruct{
    .foo = "foo",
    .bar = "bar",
    .baz = "baz"
};
SomeArrayT a[3] = {
    {
        foo,
        bar
    },
    {
        foo,
        bar
    },
    SomeArrayT{}
};
vector<int> x{1, 2, 3, 4};
vector<T> x{{}, {}, {}, {}};
f(MyMap[{composite, key}]);
new int[3]{1, 2, 3};
Type name{// Comment
          value};

// BitFields:
//     AlignConsecutiveBitFields
//     BitFieldColonSpacing

struct BitFieldAlignment {
  int x : 1;
  int longBitFieldName : 12;
  // A comment in the middle
  int y : 1;

  int z : 1;
};

// Enums:
//     AllowShortEnumsOnASingleLine
//     BraceWrapping -> AfterEnum
//     BreakBeforeBraces
//     EnumTrailingComma
//     SpaceInEmptyBraces

enum Color { A, B };

enum { A, B, C };
enum {
  D,
  E,
  F,
};

enum Empty {};

// Unions:
//     BraceWrapping -> AfterUnion
//     BreakBeforeBraces
//     SpaceInEmptyBraces

union U {
  int x;
  float y;
};

union U {};

// Templates:
//     BreakBeforeTemplateCloser
//     BreakTemplateDeclarations
//     SpaceAfterTemplateKeyword
//     SpacesInAngles

template <typename Foo, typename Bar>
Foo DoStuff(Bar bar);

Foo* DoStuff<Foo*>(bar);

// Using Declarations:
//     SortUsingDeclarations

using boost::regex;
using boost::regex_constants::icase;
using std::map;
using std::string;
using std::vector;
using std::chrono::duration_cast;

// Lambda Expressions:
//     AllowShortLambdasOnASingleLine
//     BraceWrapping -> BeforeLambdaBody
//     BreakBeforeBraces
//     LambdaBodyIndentation
//     SpaceInEmptyBraces

auto lambda = [](int x, int y) { return x < y; };

connect([]() {
  Foo();
  Bar();
});

auto empty = [](){};

// Concepts and Requirements:
//     AllowShortCompoundRequirementsOnASingleLine
//     BreakBeforeConceptDeclaration
//     IndentRequiresClauses
//     RequiresClausePosition
//     RequiresExpressionIndentation
//     SpaceBeforeParens

template <typename T>
concept C = requires(T x) {
  { x + 1 } -> same_as<int>;
  { x - 1 } -> same_as<int>;
};

template <typename T>
  requires SomeConcept<T>
struct Foo {};

template <typename T>
void Bar()
  requires SomeConcept<T>
{}


// Extern Declarations:
//     BraceWrapping -> AfterExternBlock
//     BreakBeforeBraces
//     IndentExternBlock
//     SpaceInEmptyBraces

extern "C" {
void Foo();
void Bar();
}

extern "C" {}

// Attributes:
//     BreakAfterAttributes

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

switch (b) {
[[unlikely]]
case 1:
  ++b;
  break;
[[likely]]
default:
  return;
}

// Assembly Code:
//     BreakBeforeInlineASMColon

asm volatile("string", : : val);
asm("cmoveq %1, %2, %[result]"
    : [result] "=r"(result)
    : "r"(test), "r"(new), "[result]"(old));

// Export Blocks:
//     IndentExportBlock

export {
  void Foo();
  void Bar();
}

// Goto:
//     IndentGotoLabels

void Foo() {
  if (Bar()) {
  label1:
    return;
  }
label2:
  return;
}