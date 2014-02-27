Morse Coder
===========

A small project to create a tool to easily add morse code functionality to other arduino projects.

The morse() function is given a string containing dots, dashes, space and slashes, representing dots, dashes,
space, and wordspace.

Example inputs for the function:

morse("...---.../")
  * This is the standard emergency signal, SOS. It consists of three letters, and ended by a wordspace. A space is
    always entered between each letter or number.
  * The slash represents a wordspace, providing a pause in transmission before the message is repeated.

morse("--. --- -../.--- ..- .-../")
  * This is the traditional norwegian greeting used during christmas. The morse code translates to "GOD JUL".
    You'll notice that there is no space before and after either of the backslashes. Wordspace and space are not 
    used together.

For more details on using morse code in general check out the entry on Wikipedia, it contains a list of various
morse code standards, including Internation Morse Code used in the examples.

http://en.wikipedia.org/wiki/Morse_code
