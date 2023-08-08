const addon = require('./build/Release/testaddon');

console.log('Initializing:', addon.init());
console.log('Reading Button Status:', addon.readButtonStatus());
