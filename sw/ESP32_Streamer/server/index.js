var express = require("express");
var bodyParser = require("body-parser");
var fs = require("fs");

const app = express();
const port = 5003; // default port to listen

app.use(
	bodyParser.raw({
		// inflate: true,
		type: '*/*'
	})
);

// route to handle samples from the ADC - 16 bit single channel samples
app.post('/adc_samples', (req, res) => {
	console.log(`Got ${req.body.length} ADC bytes`);
	fs.appendFile('adc.raw', req.body, () => {
		res.send('OK');
	});
});

// start the Express server
app.listen(port, '0.0.0.0', () => {
	console.log(`server started at http://0.0.0.0:${port}`);
});
