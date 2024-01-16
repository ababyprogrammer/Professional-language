using System;
using System.Net.Http;
using System.Threading.Tasks;
using HtmlAgilityPack;

namespace WebScraper
{
    class Program
    {
        static async Task Main(string[] args)
        {
            string url = "https://www.example.com";
            string html = await GetHtmlAsync(url);
            HtmlDocument doc = new HtmlDocument();
            doc.LoadHtml(html);
            string text = ExtractText(doc);
            Console.WriteLine(text);
        }

        private static async Task<string> GetHtmlAsync(string url)
        {
            using HttpClient client = new HttpClient();
            return await client.GetStringAsync(url);
        }

        private static string ExtractText(HtmlDocument doc)
        {
            StringBuilder text = new StringBuilder();
            foreach (HtmlNode node in doc.DocumentNode.Descendants())
            {
                if (node.NodeType == HtmlNodeType.Text)
                {
                    text.Append(node.InnerText.Trim());
                }
            }
            return text.ToString();
        }
    }
}