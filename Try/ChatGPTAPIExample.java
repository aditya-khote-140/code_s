import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Scanner;

public class ChatGPTAPIExample {

    private static final String API_KEY = "YOUR_API_KEY";
    private static final String MODEL = "gpt-3.5-turbo";

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your prompt: ");
        String prompt = scanner.nextLine();

        URL url = new URL("https://api.openai.com/v1/engines/davinci-codex/completions");
        HttpURLConnection connection = (HttpURLConnection) url.openConnection();
        connection.setRequestMethod("POST");
        connection.setRequestProperty("Authorization", "Bearer " + API_KEY);
        connection.setRequestProperty("Content-Type", "application/json");

        String json = "{\"prompt\": \"" + prompt + "\", \"model\": \"" + MODEL + "\", \"prompt_completion_mode\": \"code\"}";
        byte[] bytes = json.getBytes();
        connection.setRequestProperty("Content-Length", String.valueOf(bytes.length));

        connection.setDoOutput(true);
        PrintWriter writer = new PrintWriter(connection.getOutputStream());
        writer.write(json);
        writer.close();

        int responseCode = connection.getResponseCode();
        if (responseCode != 200) {
            throw new IOException("API returned status code: " + responseCode);
        }

        InputStream inputStream = connection.getInputStream();
        Scanner responseScanner = new Scanner(inputStream);
        String response = responseScanner.nextLine();
        responseScanner.close();

        System.out.println(response);

        // Parse the response and extract the code
        ObjectMapper mapper = new ObjectMapper();
        JsonNode responseNode = mapper.readTree(response);
        JsonNode codeNode = responseNode.get("choices").get(0).get("code");

        // Print the code
        System.out.println(codeNode.asText());
    }
}
