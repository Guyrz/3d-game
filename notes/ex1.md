# Ex1 — C++ Foundations I: Values, Control Flow, Functions

## Box-and-frame model
- A variable is a **box**: a few bytes at an address, interpreted by its type.
- Calling a function creates a **stack frame** holding its parameters and locals.
  The frame is destroyed when the function returns; all its boxes stop existing.
- **Pass by value:** a parameter is a new box filled with a **copy** of the argument.
  Changing the copy never touches the caller's box.
- The only way a value gets back is `return`, and the caller must assign it:
  `playerHp = takeDamage(playerHp, 30);`
- Proof of separate boxes: `&hp` and `&playerHp` print different addresses.
- Debugger Frames panel = the call stack = my diagram (newest frame on top).

## Scope and lifetime
- A box lives from its declaration to the closing `}` of its scope.
- A box declared inside a loop body is created and destroyed **every pass**.
  State that must persist across passes is declared **before** the loop.
- Inner declaration with the same name **shadows** the outer one (MSVC C4456).
- Using a name outside its scope is a compile error ("undeclared identifier").
- Uninitialised variable: the box exists but holds leftover bits.
  Debug (/RTC1) stops with Run-Time Check Failure #3 and shows 0xCCCCCCCC;
  Release silently prints garbage. C++ skips zero-fill to avoid wasted work.

## Types and conversions
- Integer division: `7 / 2` is 3 — division happens before conversion,
  so `double b = 7 / 2;` is 3.0.
- Real → int truncates toward zero: 3.9 → 3, -3.9 → -3 (use std::floor for tiles).
- `int x = 3.9;` warns (C4244); `int x{3.9};` refuses to compile (C2397).
- char is a small integer: `'A' + 1` is 66, printed as `B` from a char.
- Vertex = position + normal = 6 floats = 24 bytes; double doubles memory.

## Floating point
- 1/60 is not exact in binary (60 = 2²·3·5; 3 and 5 don't divide 2).
- Error accumulates and grows with the value's size:
  float clock after 1 h = 3597.2 (−2.8 s); double = 3600.000000018.
- Never compare floats with `==`. Use a tolerance; for values of very different
  sizes use a relative one: `std::abs(a - b) < eps * std::abs(b)`.
- Game clock → double; per-frame values (positions) → float.

## Range check
- d ≤ r ⇔ d² ≤ r², valid because d ≥ 0 and r ≥ 0.
- Compare squared distance with `range * range` — no sqrt needed.
- Squaring hides a negative range: validating r ≥ 0 is my responsibility.

## Functions and declarations
- The compiler reads top to bottom; a call needs the function's name and types first.
- Declaration (prototype) = promise; definition = body. Linker connects them.
- Later: declarations go in headers (.h), definitions in .cpp.

## Habits
- Predict on paper before running; the prediction is what catches silent bugs.
- Know what a counter **means** at every line that reads it (off-by-one).
- Inside a loop: decide → apply → clamp → print → advance.
- Clamp the **result**, after the change, not before.
- Rule numbers as named `constexpr` in one place.
- Order of updates within a turn/frame is a design decision — choose it.