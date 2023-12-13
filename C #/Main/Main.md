In this code, the `Main` method is made asynchronous to enable non-blocking downloads. The `WebClient` class is used to download the file. The `DownloadFileTaskAsync` method downloads the file asynchronously and returns a Task object that represents the ongoing operation.

The DownloadProgressChanged event is subscribed to in order to provide progress updates during the download.

Finally, the

``` copy text
try-catch-finally
```

block is used to handle exceptions that may occur during the download and to ensure that a message is displayed when the download is completed, regardless of whether an error occurred.