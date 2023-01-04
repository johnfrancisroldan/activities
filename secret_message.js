/* SECRET MESSAGE  
    Transform an array of strings into a secret message using array methods 
*/

// Secret Message
let secretMessage = [
    'Learning', 'is', 'not', 'about', 'what', 'you', 'get', 'easily', 
    'the', 'first', 'time,', 'it', 'is', 'about', 'what', 'you', 'can',
    'figure', 'out.', '-2015,', 'Chris', 'Pine,', 'Learn', 'JavaScript'
];

console.log(`Original Array Length: ${secretMessage.length}`);

// Remove last item in array
secretMessage.pop();
console.log(`
Remove last item using .pop() method.
    Array Length: ${secretMessage.length}
`);

// Add 2 items in array
secretMessage.push('to', 'Program');
console.log(`
Added two values using .push() method.
    Array Length: ${secretMessage.length}
`);

// Replacing value by it s index
let findEasilyIndex = secretMessage.indexOf('easily');
console.log('Replacing the specific value using index of item.');
console.log(`   Previous Value: ${secretMessage[findEasilyIndex]}`);
secretMessage[findEasilyIndex] = 'right';
console.log(`   Modified Value: ${secretMessage[findEasilyIndex]}`);

// Remove first item in array
secretMessage.shift();
console.log(`
Remove the first item using .shift method.
    Array Length: ${secretMessage.length}
`);

// Remove first item in array
secretMessage.unshift('Programming');
console.log(`
Adding 1 item in the beginning of the array .unshift() method.
    Array Length: ${secretMessage.length}
`);

// Replacing range of items by one item in array
console.log(`
Changing range of items by one item using .splice() method.
    Previous: ${secretMessage.slice(6, 11)}`);
secretMessage.splice(6, 11, 'know,');
console.log(`   Now: ${secretMessage.slice(6, 11)}
`);

// Concatenating the array by its separators
console.log(`
Concatenating the array separators using .join() method.
    Secret Message:
        ${secretMessage.join(' ')}
`);

