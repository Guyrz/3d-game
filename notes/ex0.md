## The Build Chain 

1. Cmake reads CMakeLists.txt ( what to build ) and generates build.ninja
2. ninja runs the commands, recompiling files that changed.
3. MSVC: cl.exe compiles each .cpp into an .obj , and link.exe combines these objects into one .exe
4. Clion triggers these tools
5. cmake-build-debug holds all generated files. It is rebuilt from source, so it is not committed

## Git
- Working directory → (add) → staging area → (commit) → local repo → (push) → GitHub.
- restore copies the last saved version back into the working directory.
- Everyday cycle: status → diff → add → commit → push.
- Staging lets each commit contain one finished, logical change.
- SSH: the public key only verifies; the private key proves it's me and never leaves my machine.

## Debugger
- A breakpoint pauses the program before that line runs; Step Over runs one line at a time.
- A for loop with `i <= 4` runs the body 4 times but checks the condition 5 times.
- Debugger: inspect everything at one moment without changing code.
- Prints: a record over time, for bugs that develop across many frames.

## Surprised me
- How much happens outside the code itself. A single change goes through a fixed
  cycle (status → diff → add → commit → push), and setting up the toolchain took
  longer than writing the program. Version control and build setup are a real
  part of the work, not overhead.
- That the debugger isn't always the right tool. In a real-time game, pausing
  stops the very behaviour you want to observe, so bugs that develop over many
  frames need values logged live while the game runs.