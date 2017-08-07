const path = require('path')

module.exports = {
  entry: {
    retainedProps: './lib/js/src/retainedProps/retainedPropsRoot.js'
  },

  output: {
    path: path.join(__dirname, 'bundledOutputs'),
    filename: '[name].js'
  }
}
