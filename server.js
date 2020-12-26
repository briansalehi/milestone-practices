const express = require("express");
const path = require("path");
const fs = require("fs");
const app = express();

app.get("/", function(req, res) {
	fs.stat(`html-files/index.html`, function (err, stat) {
		if (err == null) {
			res.status(200).sendFile(path.join(__dirname, `html-files/index.html`));
		} else {
			res.status(404).sendFile(path.join(__dirname, 'no-practice.html'));
		}
	});
});

app.get("/*.html", (req, res) => {
	fs.stat(`html-files/${req.path}`, function (err, stat) {
		if (err == null) {
			res.status(200).sendFile(path.join(__dirname, `html-files/${req.path}`));
		} else {
			res.status(404).sendFile(path.join(__dirname, 'no-practice.html'));
		}
	});
});

app.get("/*", (req, res) => {
	console.log(`html-files${req.path}`)
	fs.stat(`html-files${req.path}`, function (err, stat) {
		if (err == null) {
			if (stat.isFile()) {
				console.log("file")
				fs.readlink(`html-files${req.path}`, function(lerr, filepath) {
					if (lerr == null) {
						res.status(200).sendFile(path.join(__dirname, filepath.toString()));
					} else {
						res.status(404).sendFile(path.join(__dirname, 'no-practice.html'));
					}
				});
			} else if (stat.isDirectory()) {
				console.log("dir")
				fs.readlink(`html-files${req.path}`, function(lerr, filepath) {
					if (lerr == null) {
						res.status(200).sendFile(path.join(__dirname, filepath.toString()));
					} else {
						res.status(404).sendFile(path.join(__dirname, 'no-practice.html'));
					}
				});
			} else {
				res.status(404).sendFile(path.join(__dirname, 'no-practice.html'));
			}
		} else {
			res.status(404).sendFile(path.join(__dirname, 'no-practice.html'));
		}
	});
});

app.get("*", function(req, res) {
	res.status(404).sendFile(path.join(__dirname, 'no-practice.html'));
});

app.listen(10000);
