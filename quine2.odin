package main
import "core:fmt"
main :: proc() {
  code := []string{
    `package main`,
    `import "core:fmt"`,
    `main :: proc() {`,
    `  code := []string{`,
    `  }`,
    `  for i := 0; i < 4; i += 1 { fmt.println(code[i]) }`,
    `  for i := 0; i < len(code); i += 1 { fmt.printfln("    %c%s%c,", 96, code[i], 96) }`,
    `  for i := 4; i < len(code); i += 1 { fmt.println(code[i]) }`,
    `}`,
  }
  for i := 0; i < 4; i += 1 { fmt.println(code[i]) }
  for i := 0; i < len(code); i += 1 { fmt.printfln("    %c%s%c,", 96, code[i], 96) }
  for i := 4; i < len(code); i += 1 { fmt.println(code[i]) }
}