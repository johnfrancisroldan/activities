/*
GRAMMAR CHECKER
  Just practicing iterations in javascript
 */ 

// Short story
let story = 'Last weekend, I took literally the most beautifull bike ride of my life. The route is called "The 9W to Nyack" and it stretches all the way from Riverside Park in Manhattan to South Nyack, New Jersey. It\'s really an adventure from beginning to end! It is a 48 mile loop and it literally took me an entire day. I stopped at Riverbank State Park to take some artsy photos. It was a short stop, though, because I had a freaking long way to go. After a quick photo op at the very popular Little Red Lighthouse I began my trek across the George Washington Bridge into New Jersey. The GW is a breathtaking 4,760 feet long! I was already very tired by the time I got to the other side. An hour later, I reached Greenbrook Nature Sanctuary, an extremely beautifull park along the coast of the Hudson. Something that was very surprising to me was that near the end of the route you literally cross back into New York! At this point, you are very close to the end.';

// Splitting words by space
let storyWords = story.split(' ');

// Variables
let unnecessaryWord = 'literally';
let misspelledWord = 'beautifull';
let badWord = 'freaking';
let count = 0;

// Counting number of words in story using for each method
storyWords.forEach(word => count ++)
console.log(count);

// Removing unnecessary word using filter method
storyWords = storyWords.filter(word => word !== unnecessaryWord)

//Changing misspelled word using map method
storyWords = storyWords.map(word => {
  return word === misspelledWord ? "beautiful": word
});

// Finding index of bad word using find index method
const badWordIndex = storyWords.findIndex(word => word === badWord)

// Replace bad word into 'really'
storyWords[badWordIndex] = 'really'

// Check length of each words using every method
const lengthCheck = storyWords.every(word => word.length <= 10)

// Store choices of words to replace other word
const wordsReplace = [ 'stunning', 'dazzling', 'glorious'];

// Generate random number with the lenght of wordsplace
const randNum = Math.floor(Math.random() * wordsReplace.length);

// Change the unwanted words using map method
storyWords = storyWords.map(word => word.length <= 10 ? word : word = wordsReplace[randNum])

// Combine the story words
console.log(storyWords.join(" "));
