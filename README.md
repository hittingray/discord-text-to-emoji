# Discord Text to Emoji #

This program converts a string to emojis in Discord, and automatically copies the result to clipboard. It accepts alphanumeric strings. If a non-alphanumeric character is inputted, it will simply spit out `:regional_indicator_<char>:` For example:

`abc 123`

will become 

`:regional_indicator_a: :regional_indicator_b: :regional_indicator_c:       :one: :two: :three:`

which displays as

![Converted text](/images/converted.png)

The binaries are compiled using Mingw-w64 for 64-bit Windows. I have also created a version for other programs I use such as Slack, where I have prefixed the emojis with `letter_` rather than `regional_indicator_`. You will need to download Letters.zip (available in releases). 
