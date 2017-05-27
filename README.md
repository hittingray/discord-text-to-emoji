# Discord Text to Emoji #

This program converts a string to emojis in Discord, and automatically copies the result to clipboard. It accepts alphanumeric strings. If a non-alphanumeric character is inputted, it will simply spit out `:regional\_indicator\_<char>:` For example:

`abc 123`

will become 

`:regional_indicator_a: :regional_indicator_b: :regional_indicator_c:       :one: :two: :three:`

which displays as

![Converted text](/images/converted.png)

The binaries are compiled using Mingw-w64 for 64-bit Windows. 
