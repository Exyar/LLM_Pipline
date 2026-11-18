# Under the Hood of LLMs: Interactive Pipeline & 3D Embedding Explorer

A standalone, interactive, HTML-only educational web application designed to demonstrate and visualize the foundational pipeline of Large Language Models (LLMs like GPT-4, Gemini, and Claude): **from raw human text to tokens, vocabularies, 3D semantic vector spaces, and cosine similarities**.

---

## 🚀 How to Run

Because this application is **100% HTML, CSS, and JavaScript with zero build steps or npm installations**, you can run it immediately in any browser:

### Option 1: Direct File Open (Zero Setup)
Simply double-click `index.html` or open it with your browser:
- On macOS: Right-click `index.html` → **Open With** → **Google Chrome** (or Safari / Firefox).
- Or from terminal: `open index.html`

### Option 2: Local HTTP Server (Optional)
If you prefer running via a local static server:
```bash
# Python 3
python3 -m http.server 8000

# Or Node.js
npx serve .
```
Then visit: [http://localhost:8000](http://localhost:8000)

---

## 🌟 Interactive Pipeline Sections

### 1. 📝 Input Text Section
- **Real-Time Corpus Processing**: Type custom text or choose from rich curated presets (*AI & Neural Networks*, *King & Queen Royalty*, *Animals & Forest*, *Quick Brown Fox*, *Galaxy & Cosmos*).
- **Bubble Merge vs. Remove Pop-up Modal**:
  - When you write or submit new text in the input section, a pop-up modal gives you full control over existing 3D bubbles:
    - **🗑️ Yes, Remove Previous**: Erases all previous bubbles from the 3D graph and plots only the new text tokens (starts fresh).
    - **➕ No, Merge Them**: Retains your existing bubbles in 3D space and merges the new tokens with them (incrementing frequencies for recurring words and plotting new bubbles).
- **Live Metrics**: Real-time counter for Characters, Word Count, Total Tokens Produced ($N$), and Vocabulary Size ($|V|$).
- **Configuration Switches**:
  - Tokenization mode selector: **BPE (Byte-Pair Encoding)**, **Word-Level + Punctuation**, or **Character-Level**.
  - Case sensitivity toggle (Lowercase transformation).
  - Punctuation stripping toggle.
- **Process & Update 3D Plot Button**: Instant one-click trigger to tokenize and update the 3D graph, or pause typing for 1.2s to automatically prompt the merge modal.

### 2. 🔠 Interactive Tokenizer
- **Visual Token Stream**: Each token is parsed into distinct color-coded badges displaying the token text and its discrete integer **Token ID**.
- **Special Subword Indicators**: Shows leading space markers (`Ġ` / `_`) and wordpiece splits (`##`) exactly like production LLM tokenizers (tiktoken / BPE / SentencePiece).
- **Token Inspector Card**: Click any token badge to inspect its exact character offsets, length, and raw UTF-8 hexadecimal byte sequence.

### 3. 📊 Vocabulary Table with Frequencies & Statistics
- **Well-Defined Frequency Distribution Table**:
  - **Rank (#)**: Ordered by frequency.
  - **Token String**: Monospace badge representation.
  - **Token ID**: Unique integer hash identifier.
  - **Frequency ($f$)**: Occurrence count.
  - **Relative Frequency ($f/N$)**: Percentage share of sequence.
  - **Visual Frequency Progress Bar**: Proportional gradient progress bar.
  - **Cumulative Percentage**: Demonstrates Pareto decay and Zipf's Law.
  - **Focus in 3D Action**: Quickly centers and highlights any word in the 3D vector space.
- **Table Controls**: Search filter, 4-way sorting (Frequency Desc/Asc, Alphabetical, Token ID), and one-click export to **CSV** or **JSON**.
- **Lexical Diversity**: Live calculation of Type-Token Ratio ($\text{TTR} = |V| / N$).

### 4. 🌐 3D Graph for Embeddings
- **Interactive 3D WebGL Vector Space**:
  - Words mapped into 3D continuous space, visually demonstrating that semantically related concepts cluster together (*Royalty*, *Animals*, *AI & Technology*, *Cosmos*, *Emotions*).
  - **Void Black Space**: Pure `#000000` deep abyss background for maximum visual contrast.
  - **Pinpoint Glowing Dots**: Micro-sized, crisp central dots (`radius = 0.032`) with natural continuous Gaussian exponential gradient falloff radiating smoothly into the void—zero layered ring artifacts.
  - Floating billboard text labels positioned snugly above each glowing dot.
  - Vector rays extending from origin $(0, 0, 0)$ to word positions.
  - Dotted lines connecting semantic nearest neighbors.
- **Controls & HUD**:
  - **Rotate**: Left-click + drag in 3D.
  - **Zoom**: Mouse wheel / trackpad pinch.
  - **Pan**: Right-click + drag.
  - **Clear 3D Plot**: Completely erases all bubbles and connections from 3D space, resetting the plot to void black ($0$ points).
  - **Restore / Re-plot**: Re-plots all tokens from the current input text with a single click.
  - **Camera View Presets**: Isometric, Top-Down ($X$-$Z$), Side ($X$-$Y$), Front ($Y$-$Z$), and Reset.
  - **Toggles**: Auto-Rotation and Vector Ray visibility.
  - **Inspector HUD**: Click any node in 3D to see its exact coordinates $[x, y, z]$, vector norm $\|\mathbf{v}\|$, and closest semantic neighbor.
- **Built-in Offline Fallback**: Features an integrated HTML5 2D/3D perspective projection engine that operates seamlessly even if WebGL or CDN scripts are offline.

### 5. ➕ Dynamic Word Addition Feature
- **Plot Custom Words Live**: Users can input any arbitrary word or concept (e.g., `supernova`, `kitten`, `queen`, `transformer`, `coffee`, `wisdom`).
- **Semantic Anchor Affinity**: Choose a semantic cluster (or let auto-detection infer it via character n-grams and subword morphology).
- **Instant Integration**:
  - The word is mathematically embedded and animated into the 3D space with a glowing beacon.
  - Camera smoothly focuses on the new 3D location.
  - Active Vocabulary table and Similarity Matrix update in real-time!

### 6. 📐 Semantic Similarity Table & Vector Arithmetic
- **Real-Time Input Synchronization**:
  - Whenever text is typed, updated, merged, or restored, the similarity table and matrix instantly recompute using the active tokens from your current corpus.
  - The **Target Word** dropdown automatically selects the primary word of your new text, with active words prioritized and marked with `in text` tags.
  - Clearing the 3D plot cleanly resets the similarity table and heatmap matrix.
- **Cosine Similarity Formula**:
  $$\cos(\theta) = \frac{\mathbf{u} \cdot \mathbf{v}}{\|\mathbf{u}\| \|\mathbf{v}\|}$$
- **Mode 1: Ranked Similarity Comparison Table**:
  - Select any target word to inspect its cosine similarity against all other active words in the text.
  - Shows numerical similarity score $[-1.0, +1.0]$, visual match gradient meter, angular separation in degrees ($\theta = \arccos(\text{sim})$), and semantic classification (*Strong Semantic Neighbor*, *Related Context*, *Neutral*, *Opposing*).
- **Mode 2: Heatmap Matrix**:
  - Pairwise $N \times N$ cosine similarity grid showing directional alignment specifically between the tokens in your current text.
  - $N \times N$ pairwise similarity grid with dynamic color intensity.
- **Mode 3: Vector Arithmetic Playground**:
  - Experiment with the famous Word2Vec / LLM vector arithmetic equation:
    $$\mathbf{v}_{\text{King}} - \mathbf{v}_{\text{Man}} + \mathbf{v}_{\text{Woman}} \approx \mathbf{v}_{\text{Queen}}$$
  - Computes the resultant vector live and searches the vocabulary for the closest semantic neighbor!

---

## 🛠️ Technical Details
- **Architecture**: Single-file, zero-dependency HTML5 application (`index.html`).
- **Styling**: Tailwind CSS with custom dark glassmorphism design and responsive layout.
- **3D Graphics**: Three.js WebGL with OrbitControls + custom embedded 3D perspective Canvas fallback.
- **Typography**: Google Fonts (*Inter* and *JetBrains Mono*).
