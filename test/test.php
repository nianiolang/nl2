<html>
<head>
<?php
function load_all_js($dir) {
	foreach(glob("$dir/*.js") as $file){
		echo "<script type='text/javascript' src=\"$file\"></script>";
	}
}

load_all_js('../native_lib_js/');
load_all_js('../cache_test/');
?>
</head>
<body>
<pre>instadb.test_nl.test()</pre> result: <span id='result'>In progress</span>
<script>
try {
	instadb.test_nl.test();
} catch(e) {
	document.getElementById('result').innerHTML = 'ERROR';
	throw e;
}
document.getElementById('result').innerHTML = 'OK';
</script>
</body>
