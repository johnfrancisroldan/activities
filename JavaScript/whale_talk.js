/* WHALE TALK
 Translating text to whale language
There are a few simple rules for translating text to whale language
    1) There are no consonants only vowels excluding y
    2) The u's and e's are extra long so we must double them in our program
*/

// Text to translate
const input = 'turpentine and turtles';

// Array of vowels
const vowels = ["a", "e", "i", "o", "u"];

// Result storage
const resultArray = [];

// Iterate thru all the values of input
for (let i = 0; input.length > i; i++) {
    // Iterate thru all the values of vowels
    for (let ii = 0; vowels.length > ii; ii++) {
        // Convert each letter of input into small letter
        let letter = input[i].toLowerCase();

        // Check if input is in vowels
        if (vowels[ii] == letter) {
            // Check if the letter is have e or u
            if (letter === 'e' || letter === 'u') {
                // Store the letter and double it
                resultArray.push(letter.repeat(2));
            } else {
                // Store letter
                resultArray.push(letter);
            }

        }
    }
}

// Show the array results
console.log(resultArray);

// Convert the result into one word and capitalize each letter
const resultString = resultArray.join("").toUpperCase();

// Show result
console.log(`
Input: ${input}
Translate into Whale language: ${resultString}`)