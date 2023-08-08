const testAddon = require('./build/Release/testaddon.node');
console.log('addon',testAddon);
console.log('LibUVCInit', testAddon.LibUVCInit());
console.log('LibUVCReadButtonStatus', testAddon.LibUVCReadButtonStatus())
module.exports = testAddon;
