using System;
using System.IO;
using System.Net;
using System.Threading.Tasks;

class Program
{
    private static async Task Main()
    {
        string url = "http://example.com/file.zip";
        string localFilename = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "file.zip");

        Console.WriteLine("Downloading {0} to {1}", url, localFilename);

        try
        {
            using (var client = new WebClient())
            {
                client.DownloadProgressChanged += (o, args) =>
                {
                    Console.Write("\rProgress: {0}%", args.ProgressPercentage);
                };

                await client.DownloadFileTaskAsync(new Uri(url), localFilename);
            }
        }
        catch (WebException ex)
        {
            Console.WriteLine("\r\nError downloading file: " + ex.Message);
        }
        finally
        {
            Console.WriteLine("\r\nDownload completed!");
        }
    }
}