# Discord Text to Emoji #

This program converts a string to emojis in Discord, and automatically copies the result to clipboard. It accepts alphanumeric strings. If a non-alphanumeric character is inputted, it will simply spit out **:regional\_indicator\_<char>:** For example:

**abc 123**

will become 

**:regional\_indicator\_a: :regional\_indicator\_b: :regional\_indicator\_c:       :one: :two: :three:**

which displays as

![Converted text](/images/converted.png)

The binaries are compiled using Mingw-w64 for 64-bit Windows. 